#include<stdio.h>
#include<time.h>
#include<conio.h>
#include<Windows.h>
#include<stdlib.h>


int main(void){
    time_t Time;
    Time=time(NULL);
    struct tm *Tm=localtime(&Time);
    printf("\e[1mWelcome To Program...\n%d: %d :%d  %d.%d.%d",Tm->tm_hour,Tm->tm_min,Tm->tm_sec,Tm->tm_mday,Tm->tm_mon+1,Tm->tm_year+1900);
    int num,counter;char ch;
    while(1){
        while(1){
             printf("\n\e[1;33mWrite a Number :\e[0m ");scanf("%d",&num);
             if (num>=2){
                break;
             }
             else{
                printf("\n\e[1;31mInvalid Number...\nPlease Write Again...");
             }
        }

        int *prime;
        prime=calloc(num/2,sizeof(int));
        prime[0]=2;
        int counter2=1;
        for(int k=3;k<=num;k++){

           counter=0;
           for(int i=2;i<k;i++){
            if (k%i==0){
                counter++;
                break;
            }
        }
        if (counter==0){

           prime[counter2]=k;
           counter2++;
        }

        }

        int *prime2;
        prime2= calloc(counter2,sizeof(int));
        int *num2;
        num2=calloc(counter2,sizeof(int));
        for(int k=0;k<counter2;k++){
              prime2[k]=prime[k];
        }

        int num3=num,counter3=0;
        for(int e=0;e<counter2;e++){
            counter=0;

            while(1){
               if (num % prime2[e]==0){
                   num /=prime2[e];
                   counter++;
               }
               else{
                   num=num3;
                   break;
               }
            }
            num2[counter3]=counter;
            counter3++;

        }
        printf("\n");
        counter3=0;
        for(int p=0;p<counter2;p++){
             if (prime2[p]==num){
                printf("\e[1;35m%d is Prime Number  ",num);
            }
            else if (num2[p]!=0)
                printf(" \e[1;36m%d^\e[1;35m%d +",prime2[p],num2[p]);
                counter3++;

        }
        if(counter3!=0){
          printf("\b \e[1;33m= \e[1;32m%d",num);
        }
        while(1){
            printf("\n\e[1;34mWould You Like To Contunie (Y/N) ? : ");ch=getche();
            if (ch=='Y' || ch=='y'){
                Sleep(2000);break;
            }
            else if (ch=='N' || ch=='n'){
                Time=time(NULL);
                struct tm *Tm=localtime(&Time);
                free(prime);free(prime2);free(num2);
                printf("\n\e[1;32mHave a Good Days...\n%d: %d :%d  %d.%d.%d\e[0m",Tm->tm_hour,Tm->tm_min,Tm->tm_sec,Tm->tm_mday,Tm->tm_mon+1,Tm->tm_year+1900);
                _exit(0);
            }
            else{
                printf("\n\e[1;31mWrong Character...\nPlease Write Again\e[0m");
            }
        }
    }
}
