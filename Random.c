#include<stdio.h>
#include<time.h>
#include<conio.h>
#include<Windows.h>
#include<stdlib.h>

inline int Random(int max,int min){
   srand(time(NULL)); 
   return (rand() % (int)(((max) + 1) - (min)) + (min));
}


int main(void){
    time_t Time;
    Time=time(0);char ch;
    struct tm *Tm=localtime(&Time);
    printf("Welcome To Program...\n%.2d : %.2d : %.2d  %d.%d.%d",Tm->tm_hour,Tm->tm_min,Tm->tm_sec,Tm->tm_mday,Tm->tm_mon+1,Tm->tm_year+1900);
    int max,min;
    while(1){
      while(1){
            printf("\nWrite a Max and Min Numbers: ");scanf("%d %d",&max,&min);
            if (max>=min){
                break;
            }
            else{printf("\n\e[1mInvalid Number...\nPlease Write Again...\e[0m");}
      }
           
      printf("Result: %d\n",Random(max,min));
      
      while(1){
        printf("\nWould You Like To Contunie(Y/N) ? : ");ch=getche();
	 
	    if (ch=='Y' || ch=='y'){
	 	  Sleep(2000);
	      break;
	    }
	    else if (ch=='n' || ch=='N'){
        Time=time(0);
        struct tm *Tm=localtime(&Time);
	 	printf("\n\e[1mHave a Good Days...\n%.2d : %.2d : %.2d  %d.%d.%d\e[0m",Tm->tm_hour,Tm->tm_min,Tm->tm_sec,Tm->tm_mday,Tm->tm_mon+1,Tm->tm_year+1900);exit(1);
      }
      else{printf("\n\e[1mWrong Character...\nPlease Write Again...\n\e[0m");}
    }
}}