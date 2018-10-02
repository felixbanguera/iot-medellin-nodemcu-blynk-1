# Console.log??

Now, it would be helpful to check values on pins, and that the code is running well.

**How to write to console?**

The best way to do it is to write to the serial port using [serial communication](https://en.wikipedia.org/wiki/Serial_communication) and Monitor the serial ports.

Given we are connected through USB already, there are no HW changes needed.

Click in **Open>Basics>DigitalReadSerial**, copy the new lines of each section and paste them in our file in the corresponding place below of our current code, another adjustment needs to be made, instead of using the GPIO2 for pushButton, our dev kit uses GPIO0 which is D3, So replace that line with:

> int pushButton = D3

For Monitoring the Serial communication you'll need a tool, The Arduino IDE have a simple Serial monitor you can use, go to **Tools**>**Serial Monitor**:

If you want to use a different tool I recommend [CoolTerm](http://freeware.the-meiers.org/).

Set the Serial Monitor you chose to listen to your usb port and Baudrate at 9600 (usually is the default).

![usually is the default](https://raw.githubusercontent.com/felixbanguera/iot-medellin-nodemcu-blynk-1/step_5/assets/images/coolterm_config.png)

click connect. You should start seeing the usual blinking LED and a 1 printing in Serial Monitor. If you press the Flash button you should see a 0 printing in the Serial Monitor:

![monitor](https://raw.githubusercontent.com/felixbanguera/iot-medellin-nodemcu-blynk-1/step_5/assets/images/serial_out_1.png).
