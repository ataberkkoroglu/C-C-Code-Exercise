#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>

int main(void){
    time_t Time;
    Time=time(0);
    struct tm *Tm=localtime(&Time);
    printf("Welcome To Program...\n%d: %d : %d  %d.%d.%d",Tm->tm_hour,Tm->tm_min,Tm->tm_sec,Tm->tm_mday,Tm->tm_mon+1,Tm->tm_year+1900);
    int num,sum=1,*array;
    char ch;
    
    while(1){
      array=(int *) calloc(2,sizeof(int));
      while(1){
      printf("\nHow Many Using Number Would You Like To Create Your Fibonacci Series ? : ");scanf("%d",&num);
      if(num<=0){
        printf("\nInvalid Number...\nPlease Write Number as Positive Again...");
      }
      else{
        break;
      }
    }
    array[0]=1;
    array[1]=1;
    if (num>2){
          array=(int *) realloc(array,(num-1)*sizeof(int));
          for (int i=2;i<num;i++){
          array[i]=array[i-2]+array[i-1];
    }
    printf("\n--------First Number Of %d in Fibonacci Series-----",num);
    for(int i=0;i<num;i++){
        printf("\n%d",array[i]);
    } 
    }
    else if (num==2){
        printf("\n--------First Number Of %d in Fibonacci Series-----",num);
        printf("\n%d\n%d",array[0],array[1]);
    }
    else{
          printf("\n--------First Number Of %d in Fibonacci Series-----",num);
          printf("\n%d",array[0]);
    }
    array=(int *) realloc(array,-(num-1)*sizeof(array));
    while(1){
        printf("\nWould You Like To Contunie (Y/N) ? : ");ch=getche();
        if (ch=='Y' || ch=='y'){
            break;
        }
        else if (ch=='N' || ch=='n'){
            free(array);
            printf("\nHave a Good Days...\n%d: %d : %d  %d.%d.%d",Tm->tm_hour,Tm->tm_min,Tm->tm_sec,Tm->tm_mday,Tm->tm_mon+1,Tm->tm_year+1900);
            exit(1);
        }
        else{
            printf("\nWrong Character...\nPlease Write Again...");
        }
    }
    }
    
}