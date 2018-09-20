# Making the Micro-controller work as a NodeMCU (Arduino-ish mc):

The NodeMCU dev kit is based on a blank [micro-controller](https://internetofthingsagenda.techtarget.com/definition/microcontroller), so we first need to tell it it should work as a NodeMCU firmware. Download the [*.bin](https://github.com/felixbanguera/iot-medellin-nodemcu-blynk-1/blob/step_1/assets/installation/nodemcu-master-13-modules-2018-07-11-17-46-03-float.bin) file from the repository, and install following the recommendations on the [docs](https://nodemcu.readthedocs.io/en/master/en/flash/) page.

The instruction to run in console should be be something like the following for OSX or Linux:

    esptool.py --port=/dev/cu.wchusbserial1410  write_flash  -fm=dio
    -fs=32m 0x00000 ./nodemcu-master-13-modules-2018-07-11-17-46-03-float.bin


Windows Flashing option:
https://randomnerdtutorials.com/flashing-nodemcu-firmware-on-the-esp8266-using-windows/


Note: to listo ports in linux 
	ls -l /dev/tty*


Note2: Permission sudo chmod -R 777 /dev/ttyUSB0