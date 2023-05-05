#include<stdio.h>
#include<time.h>
#include<conio.h>
#include<Windows.h>

int fac(int num){
   
    if (num<2)
      return 1;
    else
    {
        return num * fac(num-1);
    }
    
}

int fib(int num);

int main(void){
    time_t Time;
    Time=time(NULL);
    struct tm *Tm=localtime(&Time);
    printf("\e[1mWelcome To Program...\n%.2d : %.2d : %.2d  %.2d / %.2d / %.2d",Tm->tm_hour,Tm->tm_min,Tm->tm_sec,Tm->tm_mday,Tm->tm_mon+1,Tm->tm_year+1900);
    int num;char ch;
    while(1){

        printf("\n\e[1;34mWrite a Number:\e[0m ");scanf("%d",&num);
        if (num<0)
          continue;
        printf("\n\e[1;33m%d\e[1;35m! = \e[1;37m%d",num,fac(num));
        printf("\n\e[1;37m%d\e[1;31m. Number Of Fibonnacci Series : \e[1;37m%d",num+1,fib(num));
        while(1){
            printf("\n\e[1;36mWould You Like To Continue (Y/N) ? :\e[0m ");scanf(" %c",&ch);
            if(ch=='Y' || ch=='y'){
                Sleep(2000);break;
            }
            else if (ch=='N' || ch=='n'){
                Time=time(NULL);
                Tm=localtime(&Time);
                printf("\e[1;32mHave a Good Days...\n%.2d : %.2d : %.2d  %.2d / %.2d / %.2d\e[0m",Tm->tm_hour,Tm->tm_min,Tm->tm_sec,Tm->tm_mday,Tm->tm_mon+1,Tm->tm_year+1900);
                return 0;
            }
            else{
                printf("\n\e[1;4;31mWrong Character...\nPlease Write Again...\e[0m");
            }
        }
    }

}

int fib(int num){
    
    if (num<2 && num>0)
      return 1;
    else if (num==0)
      return 0;
    else
        return fib(num-1)+fib(num-2);
    
    
}