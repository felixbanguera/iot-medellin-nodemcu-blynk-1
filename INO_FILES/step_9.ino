/*
  ...
*/
#include <ESP8266WiFi.h>

#include <BlynkSimpleEsp8266.h>

const char* ssid = "network name"; // Rellena con el nombre de tu red WiFi
const char* password = "network password"; // Rellena con la contraseña de tu red WiFi
const char* auth = "###########_AUTH_TOKEN_############";

// the setup function runs once when you press reset or power the board
void setup() {
  Serial.begin(9600);
  Blynk.begin(auth, ssid, password);
}

// the loop function runs over and over again forever
void loop() {
  Blynk.run();
  Serial.println("In loop...");
  delay(500);
}
