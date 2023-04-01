#include<stdio.h>
#include<Windows.h>
#include<time.h>
#include<conio.h>

int main(void){
    time_t Time;
    Time=time(NULL);
    struct tm *Tm=localtime(&Time);char ch;
    int *array,n,temp,counter=0;
    printf("\n\e[1mWelcome To Program...\n\e[1;32m%d : %d : %d  %d.%d.%d\n\e[0m",Tm->tm_hour,Tm->tm_min,Tm->tm_sec,Tm->tm_mday,Tm->tm_mon+1,Tm->tm_year+1900);
    while(1){
        printf("\n\e[1;34mHow Many Number Would You Like To Write : ");scanf("%d",&n);
        array=(int *) calloc(n,sizeof(int));
        for(int i=0;i<n;i++){
            printf("\n\e[1;36mWrite %d.Number: ",i+1);scanf("%d",&array[i]);
        }
        for(int k=0;k<=n;k++){
            for(int e=0;e<(n-1);e++){
                
             if (array[e]>array[e+1]){
                temp=array[e+1];
                array[e+1]=array[e];
                array[e]=temp;
            }
        }
        if(k==n)
         printf("\n\e[1;35mThe Maximum Number in Array: \e[0m\e[1;36m%d",array[k-1]);
        }
        printf("\n\e[1;4;31mThe Minimum Number in Array : \e[0m\e[1;33m%d",array[0]);
        
        while(1){
        printf("\n\n\e[1;4;34mWould  You Like To Contunie (Y/N) ? :\e[0m ");ch=getche();
        if (ch=='Y' || ch=='y'){
            Sleep(2000);
            break;
        }
        else if (ch=='N' || ch=='n'){
            Time=time(NULL);
            struct tm *Tm=localtime(&Time);
            printf("\n\n\e[1;32mHave a Good Days...\n%d: %d : %d  %d.%d.%d\e[0m",Tm->tm_hour,Tm->tm_min,Tm->tm_sec,Tm->tm_mday,Tm->tm_mon+1,Tm->tm_year+1900);
            exit(1);
        }
        else{
            printf("\n\n\e[1;4;31mWrong Character...\nPlease Write Again...\a");
     }
    }
       

    }
}