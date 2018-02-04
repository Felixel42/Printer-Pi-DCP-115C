# Printer-Pi-DCP-115C
Cups network printserver with a Raspberry Pi 2/3, Brother DCP-115C and 433Mhz wireless sockets. With the following upgrade my old reliable Brother has now basic network printer functionalities and is more environmentally friendly.

## What does this documention provide ?
It is more a collection of sources which I have used to build this project than an exact fitting step by step manual. However maybe this can help someone to setup their old printer too.

## Getting Started
You should have some basic experience in creating projects with a Raspberry Pi, Linux, GPIO wiring and the related stuff. I would **not** recommend to try this as your first project. The most difficult part was to get the Brother DCP-115C running on a Raspberry Pi because there are only x86 drivers from Brother available, and no ARM binaries can be generated.  

### Parts
* **Raspberry Pi 2/3**
* **Printer**, if you don't want to struggle to setup a printer on your Pi [here](http://www.openprinting.org/printers) you can find out if your printer is supported by cups out of the box 
* **433Mhz sender and receiver**, I used [this sensor package](https://www.amazon.de/Aukru-Superregeneration-Transmitter-Modul-receiver-module/dp/B00OLI93IC) 
* **wireless socket and remote**, I bought this [set](https://www.amazon.de/gp/product/B001AX8QUM?ie=UTF8&linkCode=as2&camp=1634&creative=6738&tag=754-21&creativeASIN=B001AX8QUM) which is also used by several other tutorials
* **female-female jumper wires**, to connect the Pi with sender and receiver

### Prerequisites
* Raspberry Pi is running with an actual version of Raspbian Jessie, is connected to the internet and your local network.
* Cups is installed and running with your printer (means network printing is possible)
  * [Here](https://www.howtogeek.com/169679/how-to-add-a-printer-to-your-raspberry-pi-or-other-linux-computer/) is a good guide on how to setup cups and make a printer availabe in a local network
  * For my Brother printer I followed [this](https://www.lhinderberger.de/pi/2016/01/27/raspberry-pi-binary-x86-drivers.html) guide  which is unfortunately not available anymore. Instead [this](https://superuser.com/questions/781454/debian-arm-and-brother-dcp195c-with-cups) should be fine and maybe [this](https://www.raspberrypi.org/forums/viewtopic.php?f=28&t=127401) can help too.
* Unpack and install [433Mhz_Utils](https://github.com/ninjablocks/433Utils/tree/master/RPi_utils) in your home directory, ensure that the 433Mhz module is working with it and find out your remote code, as it is described here [here](https://www.princetronics.com/how-to-read-433-mhz-codes-w-raspberry-pi-433-mhz-receiver/)
  
### Installation

Prehook tea4Cups: prehook_POWERON : python /home/pi/Documents/Scripts/Printer/Printer_ON_Check.py

## Usage

## Contributing/Support
If you have any additions or problems with this guide, just open an issue or send me a pm.

## License

This project is licensed under the MIT License - see the [LICENSE.md](LICENSE.md) file for details.

## Acknowledgments

* [Raspberry Pi Tutorials](https://tutorials-raspberrypi.de/raspberry-pi-funksteckdosen-433-mhz-steuern/)
* [Elektronik Kompendium](https://www.elektronik-kompendium.de/sites/raspberry-pi/2007081.htm)
