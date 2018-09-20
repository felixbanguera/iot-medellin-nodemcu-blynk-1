# Tweet Blynk:

Now, our final step in the basics of this workshop is send a tweet using your twitter account when pushing a button. You will need a valid Twitter account to proceed.

In the Blynk app add a Twitter Widget.

Tap on it and on "**Connect Twitter**". Just hit connect (or change account if you want) and that's it.

In the Arduino IDE replace the Blynk.notify line with:

    Blynk.tweet("Tweet generated from a NodeMCU for testing purposes! In the first @IotMedellin workshop. #IoT, #Tech, #Medellin");

You can change the message to whatever you want to show.

Upload the code and Run the app and it should  tweet as soon as the NodeMCU starts again.

Exercise, try sending the Tweet again by pressing the button, did it work? WHY?