/*
  This file was based an Basics from Arduino and modified according to what needed for WiFi connection with ESP8266.
*/
#include <ESP8266WiFi.h>

#define LED_BUILTIN D4
int pushButton = D3;

const char* ssid = "network name"; // Rellena con el nombre de tu red WiFi
const char* password = "network password"; // Rellena con la contraseña de tu red WiFi

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  // make the pushbutton's pin an input:
  pinMode(pushButton, INPUT);

  WiFi.mode(WIFI_STA); // WiFi client Mode
  WiFi.begin(ssid, password); // WiFi connect to network

  // The following lines make sure we don't continue until it's connected:
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  // The following lines will print connection info:
  Serial.println("");
  Serial.println("WiFi connected");
  Serial.println("IP address: ");
  Serial.println(WiFi.localIP()); // Mostramos la IP
}

// the loop function runs over and over again forever
void loop() {
  delay(5000);
  WiFiClient client; //Create WiFI client
  const int httpPort = 3333; //  HTTP Port
  const char* httpHost = "host_ip"; //  HTTP Host

  //check for connection to host...
  if (!client.connect(httpHost, httpPort)) {
    Serial.println("Connection Failed");
    return;
  }
  String url = "/ping";
  // Sending the request
    client.print(String("GET ") + url + " HTTP/1.1\r\n" +
           "Host: " + httpHost + "\r\n" +
           "Connection: close\r\n\r\n");

  //Define and verify a timeout of 50 secs:
  unsigned long timeout = millis();
  while (client.available() == 0) {
    if (millis() - timeout > 5000) {
      Serial.println(">>> Time Excedeed !");
      client.stop();
      return;
    }
  }

 // Read the response and print it through serial monitor
  while(client.available()){
    String line = client.readStringUntil('\r');
    Serial.print(line);
  }

  while(1){delay(0);}
}