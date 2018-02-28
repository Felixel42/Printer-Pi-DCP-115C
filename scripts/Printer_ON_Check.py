#! /usr/bin/python

import os

os.chdir(".")
os.system("lpinfo -v | grep -e 'direct usb*' > ONTest1")

if os.stat("ONTest1").st_size == 0:
    os.system("/home/pi/433Utils/RPi_utils/steuerung 1")
