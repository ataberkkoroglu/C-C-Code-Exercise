#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
typedef int n;
typedef char string;
n main(void){
    time_t Time;
    Time=time(0);
    struct tm *Tm=localtime(&Time);
    n num,num2,array[3][3],array2[3][3];
    string ch;
    printf("Welcome To Program...\n%d : %d : %d %d.%d.%d",Tm->tm_hour,Tm->tm_min,Tm->tm_sec,Tm->tm_mday,Tm->tm_mon+1,Tm->tm_year+1900);
    while(1){
        for(n i=0;i<3;i++){
            for(n e=0;e<3;e++){
                printf("\nWrite a %d.%d Number For First Matrix: ",i+1,e+1);scanf("%d",&array[i][e]);fflush(stdin);
                printf("\nWrite a %d.%d Number For Second Matrix: ",i+1,e+1);scanf("%d",&array2[i][e]);fflush(stdin);
            }
        }
        for(n k=0;k<3;k++){
            for(n j=0;j<3;j++){
                array[k][j]=array[k][j]*array2[k][j];
                array2[k][j]=array[k][j];
            }
        }
        
         for(n k=0;k<3;k++){
            for(n j=0;j<3;j++){
                printf("\n%d.%d Number: %d",k+1,j+1,array[k][j]);
            }
        }
        while(1){
            printf("\nWould You Like To Contunie(Y/N) ? : ");ch=getche()
         ;
         if(ch=='Y' || ch=='y'){
            break;
         }
         else if (ch=='N' || ch=='n'){
            Time=time(0);
            struct tm *Tm=localtime(&Time);
            printf("\nHave a  Good Days...\n%d : %d : %d %d.%d.%d",Tm->tm_hour,Tm->tm_min,Tm->tm_sec,Tm->tm_mday,Tm->tm_mon+1,Tm->tm_year+1900);_Exit(1);
         }
         else{
            printf("\nWrong Character...\nPlease Write Again...\n");
         }   
        }
    }
}
