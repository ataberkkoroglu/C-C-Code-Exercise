#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<Windows.h>

int main(void){
    time_t Time;
    Time=time(NULL);
    struct tm *Tm=localtime(&Time);
    printf("\e[1mWelcome To Program...\n%.2d : %.2d : %.2d  %.2d.%.2d.%.2d",Tm->tm_hour,Tm->tm_min,Tm->tm_sec,Tm->tm_mday,Tm->tm_mon+1,Tm->tm_year+1900);
    int num,num2,lcm;char ch;
    while(1){
        while(1){
            printf("\n\n\e[1;33mWrite First Number:\e[0m ");scanf("%d",&num);
            if(num<=0){
                printf("\n\n\e[1;31mInvalid Number...");
            }
            else{
                break;
            }
        }
          while(1){
            printf("\n\n\e[1;33mWrite Second Number:\e[0m ");scanf("%d",&num2);
            if(num<=0){
                printf("\n\n\e[1;31mInvalid Number...");
            }
            else{
                break;
            }
        }
        if(num>=num2){
            for(int i=num2;i<=(num*num2);i++){
                if(i%num==0 && i%num2==0){
                   lcm=i;break;
                   
                }
            }
        }
        else{
             for(int i=num;i<=(num*num2);i++){
                if(i%num==0 && i%num2==0){
                   lcm=i;break;
                }
            }
        }
        printf("\n\e[1;32mLCM Of (%d and %d) : \e[1;35m%d",num,num2,lcm);
        while(1){
            printf("\n\n\e[1;36mWould You Like To Contunie (Y/N) ? :\e[0m ");ch=getche();
            if (ch=='Y' || ch=='y'){
                Sleep(2000);break;
            }
            else if (ch=='N' || ch=='n'){
                Time=time(NULL);
                struct tm *Tm=localtime(&Time);
                printf("\n\n\e[1;32mHave a Good Days...\n%.2d : %.2d : %.2d  %.2d.%.2d.%.2d\e[0m",Tm->tm_hour,Tm->tm_min,Tm->tm_sec,Tm->tm_mday,Tm->tm_mon+1,Tm->tm_year+1900);
                _exit(0);
            }
            else{
                printf("\n\n\e[1;31mWrong Character...Please Write Again...");
            }
        }
    }
}