
# Extra exercise, shall we do it?

Now we have a way of writing and reading to Digital pins, and also to write to Serial monitor.

We can make an exercise of writing and reading analog Pins.

Analog pins usually are for reading/controlling devices which values varies within a range. Inputs usually between 0-4095 and outputs usually between 0-255.

To read an Analog input let's follow a basic example. Go to **Open**>**03.Analog**>**Analog Input**

Take a look at the ino file, it basically says it will blink a led with delay depeding on an Analog read from a Potentiometer. The analog sensor can also be a Photoresistor.

The circuit diagram should be similar to the following:

![Circuit diagram](https://raw.githubusercontent.com/felixbanguera/iot-medellin-nodemcu-blynk-1/step_6/assets/images/circuit_diagram.png)

Also the code can be adjusted to the following in order to see the sensor values in the serial monitor, and to see it blink slower.


    int sensorPin = A0;    // select the input pin for the potentiometer
    int ledPin = 13;      // select the pin for the LED
    int sensorValue = 0;  // variable to store the value coming from the sensor
    
    void setup() {
      Serial.begin(9600);
      // declare the ledPin as an OUTPUT:
      pinMode(ledPin, OUTPUT);
    }
    
    void loop() {
      // read the value from the sensor:
      sensorValue = analogRead(sensorPin);
      // turn the ledPin on
      digitalWrite(ledPin, HIGH);
      // stop the program for <sensorValue> milliseconds:
      Serial.println(sensorValue);
      delay(sensorValue*10);
      // turn the ledPin off:
      digitalWrite(ledPin, LOW);
      // stop the program for for <sensorValue> milliseconds:
      Serial.println(sensorValue);
      delay(sensorValue*10);
    }
