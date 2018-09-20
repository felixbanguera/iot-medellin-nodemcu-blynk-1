# Hello World WIFI:

One of the most interesting and powerful resources we will learn is how to connect to the internet through [WiFi with NodeMCU](https://nodemcu.readthedocs.io/en/master/en/modules/wifi/).

First we need to **include** the wifi library:

    #include <ESP8266WiFi.h>

Second we need to **define** the SSID and password to be used:

    const char* ssid = "SSID"; // nafe of  WiFi network const
    const char* password = "Contraseña"; // password of wifi network

Then, we'll need to **setup** the wifi connection with the following steps (inside the setup method):

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

Right now if we flash the dev kit, it should work and we should see it's connected, printing in serial monitor the wifi info.

Lot more interesting is to test an http request (we will use a local service for testing purposes), so now inside the **loop** function:


    WiFiClient client; //Create WiFI client
    const int httpPort = ##; //  HTTP Port
    const char* httpHost = ##.##.##.##; //  HTTP Host

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

We can erase now all previous functionality and let's add at the end the lines:

    while(1){delay(0);} // this only to stop the loop from doing the request

Upload the code, and connect through serial monitor, you should see something like [this](https://github.com/felixbanguera/iot-medellin-nodemcu-blynk-1/blob/step_2/assets/images/serial_out_2.png)