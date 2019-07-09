#include <stdio.h>
#include "wiringPi.h"
#include "softPwm.h"

#define servo 2

int A()
{
    softPwmWrite(servo,25);
    delay(2000);
    softPwmWrite(servo,5);
    delay(2000);
}

int main()
{
if(wiringPiSetup() == -1) return 1;
int main()
{
	if(wiringPiSetup() == -1)
	{
        return 1;
	}
	softPwmCreate(servo,0,3000);
	while(1)
	{
	        A();
	}
        return 0;
}

