# Making it blink for real!

Copy the file content of the Blink example and paste it in our current file (It will not let you modified it, you can try though), then add the lines needed to define the built in LED to the correct pin number:

    #define LED_BUILTIN 2

Upload the code ad check for the blinking LED... **hurray!**

Note pin references can use GPIO number or board naming.

Take a look at the Pin diagram to understand a bit more:

![Pin diagram](https://github.com/felixbanguera/iot-medellin-nodemcu-blynk-1/blob/step_4/assets/images/pin_diagram.png) 
 in this case you can test so changing the definition for the LED_BUILTIN as:

    #define LED_BUILTIN D4

Make changes and Upload again, blinking should work the same!
