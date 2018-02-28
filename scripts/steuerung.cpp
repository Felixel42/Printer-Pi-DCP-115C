#include "../rc-switch/RCSwitch.h"
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
    int PIN = 0; // wiring Pi Pin Layout
    // TODO 
    int codeSocketDon = *EnterCode*;
    int codeSocketDoff = *EnterCode*;

    if (wiringPiSetup() == -1) return 1;

    RCSwitch mySwitch = RCSwitch();
    mySwitch.enableTransmit(PIN);

    if (atoi(argv[1]) == 1) { 
        mySwitch.send(codeSocketDon, 24);
    } else {
        mySwitch.send(codeSocketDoff, 24);
    }
    return 0;
}