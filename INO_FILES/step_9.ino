/*
  ...
*/
#include <ESP8266WiFi.h>

#include <BlynkSimpleEsp8266.h>

const char* ssid = "Yuxi Global"; // Rellena con el nombre de tu red WiFi
const char* password = "W310V3w3d0"; // Rellena con la contraseña de tu red WiFi
const char* auth = "bc797978b45e4520ac5cfe0745883b41";

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