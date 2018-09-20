# HelloWorld Blynk:

Now let's configure the dev kit to connect to the Blynk app:

 - Include the library for Blynk+ESP8266

> #include <BlynkSimpleEsp8266.h>

 - Define a constant for the AuthToken with the one received in the email

> char auth [] = "98d_the_authentication_token_94";

 -  Begin Blynk connection in setup function, so you will no longer need Wi-Fi manually connection. Remove all setup lines and only include:

> Serial.begin(9600); //For monitoring purposes
> Blynk.begin(auth, ssid, password);

 - Run Blynk inside the loop function, also add a default print to monitor it's running:

> Blynk.run();
> Serial.println("In loop...");
> delay(500);

Upload the code and it will show "In loop..." in the Serial Monitor, at the same time Run the Blynk app you created and you should see it is connected to the board. With a message like:

> workshop_NodeMCU_1
> Online since hh:mm PM Sep 20, 2018
