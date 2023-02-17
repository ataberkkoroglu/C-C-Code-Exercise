#include<stdio.h>
#include<time.h>
#include<conio.h>
#define Print(a) printf("\nRepeater Number: %d",a)
#include<stdlib.h>

int main(void){
   time_t Time;
   Time=time(0);
   struct tm *Tm=localtime(&Time);
   printf("Welcome To Program...\n%d : %d : %d %d.%d.%d",Tm->tm_hour,Tm->tm_min,Tm->tm_sec,Tm->tm_mday,Tm->tm_mon+1,Tm->tm_year+1900);
   int *array,num,counter;
   char ch;
   
   while(1){
    array=(int *) calloc(1,sizeof(int));
    while(1){
          printf("\nHow Many Index Do You Want To Create Your Array ? : ");scanf("%d",&num);
          if (num<=0){
            printf("\nInvalid Number...\nPlease Write Again...");
          }
          else{
            break;
          }
    }
    
    array=(int *) calloc(num,sizeof(int));
    for(int i=0;i<num;i++){
    printf("\nWrite %d. Number: ",i+1);scanf("%d",&array[i]);
   }
   for(int e=0;e<num;e++){

      counter=0;
      for(int k=0;k<num;k++){

        if (e!=k){

          if (array[e]==array[k]){

            if (array[e]!=NULL){
               Print(array[e]);
               array[k]=NULL;
               array[e]=NULL;
            }
            break;
         }
        }    
      }
  
   }
   while(1){
    printf("\nWould  You Like To Contunie (Y/N) ? : ");ch=getche();
        if (ch=='Y' || ch=='y'){
            break;
        }
        else if (ch=='N' || ch=='n'){
            Time=time(0);
            struct tm *Tm=localtime(&Time);
            printf("Have a Good Days...\n%d: %d : %d  %d.%d.%d",Tm->tm_hour,Tm->tm_min,Tm->tm_sec,Tm->tm_mday,Tm->tm_mon+1,Tm->tm_year+1900);
            exit(1);
        }
        else{
            printf("\nWrong Character...\nPlease Write Again...");
   }
   }
  
}
}