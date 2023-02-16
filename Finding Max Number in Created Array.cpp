#include<iostream>
#include<conio.h>
#include<time.h>

using namespace std;

int Program(){
   int numbers[20],temp,counter=0;
   for(int i=0;i<20;i++){
    cout<<endl<<"Write "<<i+1<<". Number: ";cin>>numbers[i];
   }
   while(counter<20){
     for (int e=0;e<20;e++){
       if (numbers[e]>numbers[e+1]){
         temp=numbers[e+1];
         numbers[e+1]=numbers[e];
         numbers[e]=temp;
       }
     
   }
   counter++;
   }
   /*for(int i=0;i<20;i++){
    cout<<endl<<i+1<<". Number: "<<numbers[i];
   }*/

   return numbers[20];
}

int main(void){
    time_t Time;
    Time=time(0);
    struct tm *Tm=localtime(&Time);
    char ch ;int *num=new int;
    printf("Welcome To Program...\n%d : %d : %d\t%d.%d.%d",Tm->tm_hour,Tm->tm_min,Tm->tm_sec,Tm->tm_mday,Tm->tm_mon+1,Tm->tm_year+1900);
    while(1){
      *num=Program();
      cout<<endl<<"The Biggest Number in Created Array: "<<*num;
      while(1){
        cout<<endl<<"Would You Like To Contunie(Y/N) ? : ";ch=getche();
        if(ch=='Y' || ch=='y'){
            _sleep(2);
            break;
        }
        else if (ch=='N' || ch=='n'){cout<<endl<<"Have a Good Days";exit(1);}
        else{cout<<endl<<"Wrong Character...\nPlease Write Again...\a";delete num;}
      }
    }
    
}