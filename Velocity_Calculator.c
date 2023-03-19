#include<stdio.h>
#include<locale.h>
#include<time.h>
#include<conio.h>
#include<Windows.h>

float Velocity(double p2,double p1,double difference_time){
    printf("\n\e[1;37mDistance: %lf\n\e[1mElapsed Time : %lf\e[0m",p2-p1,difference_time);
    return (p2-p1)/difference_time;
}

int main(void){
    
    time_t Time;
    Time=time(NULL);
    struct tm *Tm=localtime(&Time);
    char ch,x;
    printf("\e[1;1;36mWelcome...\n%d : %d : %d\t%d.%d.%d\e[0m\n",Tm->tm_hour,Tm->tm_min,Tm->tm_sec,Tm->tm_mday,Tm->tm_mon+1,Tm->tm_year+1900);
    double p1,p2;
    while(1){
       Time=time(NULL);
       struct tm *Tm=localtime(&Time);
       printf("\n\e[1;4;35mWhat The Distance From Referance Point To Your Location \e[1;4;37m(Write as KM):\e[0m ");
       scanf("%lf",&p1);
       printf("\n\e[1;4;31mIf You Want To Contunie, Press Enter Key...\n");
       while(1){
       fflush(stdin);
       x=fgetc(stdin);
       if (x!=0x0A){
           printf("\n\e[1;4;35mWhat The Distance  From Your Initial Location To Your Finish Location  \e[1;4;37m(Write as KM):\e[0m ");;scanf("%lf",&p2);
           time_t Time2;
           Time2=time(NULL);
           printf("\n\e[1;94mHız : %.2f",Velocity(p2,p1,difftime(Time2,Time)));
           break;
       }
       else{
         printf("\n\e[1;31mIf You Want To Quit This Process,Write any key...\n");
         printf("\n\e[1;4;32mBe Contunied...\e[0m\n");
         
       }
    }
     while(1){
        printf("\n\e[1;4;35mWould You Like To Contunie (Y/N) ? : \e[0m\n");
        ch=getche();
        if(ch=='Y' || ch=='y'){
            Sleep(2000);break;
        }
        else if (ch=='n' || ch=='N'){
            Time=time(NULL);
            struct tm *Tm=localtime(&Time);
            printf("\n\e[1;1;94mHave a Good Days...\n%d : %d : %d\t%d.%d.%d\e[0m",Tm->tm_hour,Tm->tm_min,Tm->tm_sec,Tm->tm_mday,Tm->tm_mon+1,Tm->tm_year+1900);
            _Exit(1);
        }
        else{
            printf("\n\e[1;4;31mWrong Character...\nPlease Write Again...\n\e[0m");
        }
     }
    }
    
  
}