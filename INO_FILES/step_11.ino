/*
  ...
*/
#include <ESP8266WiFi.h>

#include <BlynkSimpleEsp8266.h>

const char* ssid = "network name"; // Rellena con el nombre de tu red WiFi
const char* password = "network password"; // Rellena con la contraseña de tu red WiFi
const char* auth = "###########_AUTH_TOKEN_############";

int pushButton = D3;
int temp = 0;

// the setup function runs once when you press reset or power the board
void setup() {
  pinMode(pushButton, INPUT);
  Serial.begin(9600);
  Blynk.begin(auth, ssid, password);
}

// the loop function runs over and over again forever
void loop() {
  Blynk.run();
  int estado = digitalRead(pushButton);
  if(temp == 0 && estado == 1){
    Blynk.tweet("Tweet generated from a NodeMCU for testing purposes! In the first @IotMedellin workshop. #IoT, #Tech, #Medellin");
  }
  temp = estado;
  Serial.println("In loop...");
  delay(200);
}