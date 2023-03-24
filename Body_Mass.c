#include<stdio.h>
#include<time.h>
#include<conio.h>
#include<Windows.h>
#include<math.h>

float  Body_Mass(float w,float h) {
 return w/(pow(h,2));
}
 

int main(void){
    time_t Time;
    Time=time(NULL);
    struct tm *Tm=localtime(&Time);
    printf("\n\e[1mWelcome To Program...\n\e[1;32m%d : %d : %d  %d.%d.%d\n\e[0m",Tm->tm_hour,Tm->tm_min,Tm->tm_sec,Tm->tm_mday,Tm->tm_mon+1,Tm->tm_year+1900);
    while(1){
        float weight,height;char ch;
        printf("\n\e[1;4;34mWrite Your Mass as kg :\e[0m ");scanf("%f",&weight);
        
        printf("\n\e[1;4;35mWrite Your Height as meter :\e[0m ");scanf("%f",&height);
        float body_mass=Body_Mass(weight,height);
        if (body_mass<18.5){
            printf("\n\e[1;4;31mUNDERWEIGHT");
        }
        else if (body_mass<=18.5 && body_mass<25){
            printf("\n\e[1;4;32mNORMAL");
        }
        else if (body_mass>=25.0 && body_mass<30.0){
            printf("\n\e[1;4;33mOVERWEİGHT");
        }
        else{
            printf("\n\e[1;4;31mObese");
        }

        while(1){
            printf("\n\e[1;4;36mWould You Like To Contunie (Y/N) ? :\e[0m");ch=getche();
            if (ch=='Y' || ch=='y'){
                Sleep(2000);break;
            }
            else if (ch=='N' || ch=='n'){
                Time=time(NULL);
                struct tm *Tm=localtime(&Time);
                printf("\n\e[1;32mHave a Good Days...\n\e[1;32m%d : %d : %d  %d.%d.%d\n\e[0m",Tm->tm_hour,Tm->tm_min,Tm->tm_sec,Tm->tm_mday,Tm->tm_mon+1,Tm->tm_year+1900);
                exit(0);
            }
            else{
                printf("\n\e[1;31mWrong Character...\nPlease Write Again...\a");
            }
        }
    }
}