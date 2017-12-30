# Printer-Pi-DCP-115C
Cups network printserver with a Raspberry Pi 2/3, Brother DCP-115C and 433Mhz wireless sockets. With the following upgrade my old reliable Brother has now basic network printer functionalities and is more environmentally friendly.

## Getting Started
You should have some basic experience in creating projects with a Raspberry Pi, Linux, GPIO wiring and the related stuff. I would **not** recommend to try this as your first project. The most difficult part was to get the Brother DCP-115C running on a raspberry Pi because there are no drivers as ARM binaries from Brother available, only x86.  

### Parts
* **Raspberry Pi 2/3**
* **Printer**, if you don't want to struggle to setup a printer on your Pi [here](http://www.openprinting.org/printers) you can find out if your printer is supported by cups out of the box 
* **433Mhz sender and receiver**, I used [this package](https://www.amazon.de/Aukru-Superregeneration-Transmitter-Modul-receiver-module/dp/B00OLI93IC) 
* **wireless socket and remote**, I bought this [set](https://www.amazon.de/gp/product/B001AX8QUM?ie=UTF8&linkCode=as2&camp=1634&creative=6738&tag=754-21&creativeASIN=B001AX8QUM) which is also used by several other tutorials
* **female-female jumper wires**, to connect the Pi with sender and receiver

### Prerequisites
* Raspberry Pi is running with an actual version of Raspbian Jessie and is connected to internet and your local network.


## License

This project is licensed under the MIT License - see the [LICENSE.md](LICENSE.md) file for details

## Acknowledgments

* [Raspberry Pi Tutorials](https://tutorials-raspberrypi.de/raspberry-pi-funksteckdosen-433-mhz-steuern/)
*
