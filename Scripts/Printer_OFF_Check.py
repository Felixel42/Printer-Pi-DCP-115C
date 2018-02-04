#! /usr/bin/python

import os

os.chdir(".")

os.system("lpinfo -v | grep -e 'direct usb*' > ONTest")
os.system("lpstat -p | grep -e 'idle' > IdleTest")

if os.stat("ONTest").st_size != 0 and os.stat("IdleTest").st_size != 0:
    os.system("~/433Utils/RPi_utils/steuerung 0")
