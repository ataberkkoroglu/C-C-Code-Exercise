#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<Windows.h>
#include<conio.h>

int Random(int max,int min){
   srand(time(NULL)); 
   return (rand() % (int)(((max) + 1) - (min)) + (min));
}

int main(void){
    
    int counter2=0,counter;char ch;
    while(1){
        counter=0;
        int a=Random(100,2);
        for(int i=2;i<a;i++){
        if (a%i==0){
            counter++;break;
        }
    }
    /*if (counter2==5){
        break;
    }*/
    if (a==2 || counter==0){
        printf("\n%d. Prime number: %d",counter2+1,a);counter2++;
    while(1){
            printf("\nWould You Like To Contunie (Y/N) ? : ");
            ch=getche();
            if (ch=='Y' || ch=='y'){
             srand(time(NULL));
             Sleep(2000);
             break;
            }
            else if (ch=='N' || ch=='n'){
               printf("\nHave a Good Days...\n");
               exit(1);
            }
            else{printf("\nWrong Character...\nPlease Write Again...\a");}
    }
  
} 
    }

}