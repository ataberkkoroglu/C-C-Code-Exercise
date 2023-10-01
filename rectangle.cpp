#include<iostream>
#include<time.h>
#include<Windows.h>

using namespace std;

int main(void){
  time_t Time;
  Time=time(NULL);
  struct tm *Tm=localtime(&Time);
  printf("\n\e[1mWelcome To Program\n%.2d : %.2d : %.2d  %.2d/ %.2d / %.2d",Tm->tm_hour,Tm->tm_min,Tm->tm_sec,Tm->tm_mday,Tm->tm_mon+1,Tm->tm_year+1900);
  int *a=new int;
  char ch;
  while (true){
    cout<<endl<<"\033[1;36mWrite a Number :\033[0m ";fscanf(stdin,"%d",a);
    
    for(int i=1;i<=*a;i++){
        for(int j=*a-i;j>0;j--){
            cout<<" ";
        }
        for(int k=0;k<i;k++){
            cout<<"\033[1;31m* ";
        }
        for(int j=*a-i;j>0;j--){
            cout<<" ";
        }
        cout<<endl;
        
    }
    for(int i=*a;i>0;i--){
        for(int j=0;j<(*a-i);j++){
            cout<<" ";
        }
        for(int k=0;k<i;k++){
            cout<<"\033[1;33m* ";
        }
        for(int j=*a-i;j<(*a-i);j++){
            cout<<" ";
        }
        cout<<endl;
        
    }
    while(1){
        fflush(stdin);
        cout<<endl<<"\033[1;36mWould You Like To Continue (Y/N) ? :\033[0m ";cin>>ch;
        if (ch=='Y' || ch=='y'){
            Sleep(2000);
            break;
        }
        else if (ch=='N' || ch=='n'){
            Time=time(NULL);
            Tm=localtime(&Time);
            printf("\n\e[1;32mHave a Good Days\n%.2d : %.2d : %.2d  %.2d/ %.2d / %.2d\e[0m",Tm->tm_hour,Tm->tm_min,Tm->tm_sec,Tm->tm_mday,Tm->tm_mon+1,Tm->tm_year+1900);
            _exit(0);
        }
        else{
            printf("\033[1;4;31mWrong Character...\nPlease Write Again...\n\a\e[0m");
        }
    }
  }
    delete a;
    return 0;
}