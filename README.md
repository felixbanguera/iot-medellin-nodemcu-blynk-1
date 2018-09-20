# Let's check our Dev kit is recognized by the Arduino IDE:

Connect the dev kit through USB.

Open the Arduino IDE and take a look to get familiar with it.

![image](https://raw.githubusercontent.com/felixbanguera/iot-medellin-nodemcu-blynk-1/step_8/assets/images/new_file_ide.png)

Click from File>New. The file should be empty and should only contain the setup() and loop() function declarations. Click Save and Rename the file to "nmcu_blynk" or whatever name you'd prefer. It should have created a sketch folder with that name and an *.ino file with the same.

Click the Verification Icon to verify the file is well structured (Should be done every time before compiling).

Go to the Tools tab and configure like:

![image](https://raw.githubusercontent.com/felixbanguera/iot-medellin-nodemcu-blynk-1/step_8/assets/images/config_nodemcu_ide.png).

Now Click the Upload Icon to compile and flash the dev kit. It takes some seconds to compile, afterwards it should start flashing it and the on-board led should start blinking very fast. Also you can check the progress in the IDE console, it should be done when it shows . . . . . . . . . . . . . . .  . . . .  . . . . [ 100%].

Notice we just check uploading and compilation works fine, but there is no action in the board yet. Let's make it do something in the next step!
