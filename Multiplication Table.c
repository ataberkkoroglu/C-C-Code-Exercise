#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<Windows.h>

int main(void){
    time_t Time;
    Time=time(NULL);
    struct tm *Tm=localtime(&Time);
    printf("\n\e[1mWelcome To Program...\n%.2d : %.2d : %.2d  %.2d.%.2d.%.2d",Tm->tm_hour,Tm->tm_min,Tm->tm_sec,Tm->tm_mday,Tm->tm_mon+1,Tm->tm_year+1900);
    int num,num2;char ch;
    while(1){
        int sum=0;
        printf("\n\e[1;33mwrite First Number :\e[0m ");scanf("%d",&num);
        printf("\n\e[1;33mwrite Second Number :\e[0m ");scanf("%d",&num2);
        for(int i=0;i<num2;i++){
            sum +=num;
        }
        printf("\n\e[1;32m%d *%d = %d",num,num2,sum);
        while(1){
            printf("\n\n\e[1;36mWould You Like To Contunie (Y/N) ? : ");ch=getche();
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
