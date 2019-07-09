#include <stdio.h>
#include "wiringPi.h"

#define LED 2

int main()
{
	if(wiringPiSetup()==-1) return 1;
	
	digitalWrite(LED,1);
	delay(2000);
	
	return 0;
}
