#include <iostream>
#include "wiringPi.h"

#define LED1 1
#define LED2 4
#define LED3 5
#define LED4 6
#define SW 2

using namespace std;


int main()
{
        if(wiringPiSetup()==-1) return 1;

        pinMode(LED1,OUTPUT);
        pinMode(LED2,OUTPUT);
        pinMode(LED3,OUTPUT);
        pinMode(LED4,OUTPUT);

                for(int i=1; i<=100; i++)
                {
                        digitalWrite(LED1,1);
                        delay(100);
                        digitalWrite(LED1,0);
                        digitalWrite(LED2,1);
                        delay(100);
                        digitalWrite(LED2,0);
                        digitalWrite(LED3,1);
                        delay(100);
                        digitalWrite(LED3,0);
                        digitalWrite(LED4,1);
                        delay(100);
                        digitalWrite(LED4,0);
                        cout<<100-i<<endl;
                }
}

