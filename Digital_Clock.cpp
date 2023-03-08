#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(void){
    time_t Time;
    printf("Welcome To Program...\n");
    while (1){
        Time=time(0);
        struct tm *Tm=localtime(&Time);
        
        printf("\r\033[1mHour: %.2d : %.2d : %.2d",Tm->tm_hour,Tm->tm_min,Tm->tm_sec);
    }
}