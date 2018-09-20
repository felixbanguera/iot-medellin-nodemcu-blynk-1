# Notify with Blynk:

Now let's make the dev kit send notifications to our Blynk app which we'll receive in the phone as Push Notifications. Nice thing to know is they run in background.

Got to your Blynk app and click the **Add widget** button. Under the **Notifications** list you find the **Notification** widget. It says it costs 400 energy points but they can be recycled later, select it, and click on it after its placed in your project's layout to see options by default, you can leave it like it is for now.

In the Arduino IDE define the built in push button again, adding the declaration of the variable to D3 and setting it up as INPUT, like we did in step_5, also declare a new temporal variable as:

    int temp = 0;

Inside the loop function after the Blynk.run() call put the following lines:

    int estado = digitalRead(pushButton);
    if(temp == 0 && estado == 1){
      Blynk.notify("Hello from NodeMCU!!!");
    }
    temp = estado;
    Serial.println("In loop...");
    delay(200);

Upload the code, Make sure its running with serial monitor message, and check the Blynk app, it should appear connected, and you should have received the first message. WHY???

Also if you press, hold and release, you will receive the notification as well.

Also, try putting your app to run in background and hit the button again, you should receive the Push Notification too.