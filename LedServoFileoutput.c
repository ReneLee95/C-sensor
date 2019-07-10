#include <stdio.h>
#include <sys/types.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <errno.h>
#include <stdlib.h>
#include "wiringPi.h"
#include <unistd.h>
#include "softPwm.h"
#define LED 2
#define SERVO 3

int main()
{
        if(wiringPiSetup() == -1) return 1;

        pinMode(LED,OUTPUT);
        softPwmCreate(SERVO,0,100);
        FILE *fp;
        int data;
        int val = 0;

        val = digitalRead(LED);
        for(int i=0; i<3; i++)
        {
                digitalWrite(LED,1);
                sleep(1);
                softPwmWrite(SERVO,10);
                sleep(1);
                softPwmWrite(SERVO,10);
                sleep(1);
                        fp = fopen("test.txt","w");

                                for(int i=0; i<10; i++)
                                {
                                        fprintf(fp,"%d\n",i);
                                }

                        fclose(fp);

                        fp = fopen("test.txt","r");
                                for(int i=0; i<10; i++)
                                {
                                        fprintf(fp,"%d\n",i);
                                }

                        fclose(fp);

                        fp = fopen("test.txt","r");

                        while(fscanf(fp, "%d", &data)!=EOF)
                        {
                                printf("%d\n",data);
                        }

                        fclose(fp);
                digitalWrite(LED,0);
                sleep(1);
                softPwmWrite(SERVO,1);
                sleep(1);
        }

        return 0;
}


