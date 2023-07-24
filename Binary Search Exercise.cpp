#include<iostream>
#include<time.h>
#include<Windows.h>
#include<stdlib.h>
#include<math.h>
using namespace std;

int Search(int *arr,int n){
    int num,i;
    printf("\n\e[1;36mWrite a Number :\e[0m ");scanf("%d",&num);

    if (num<arr[n/2]){
       for(i=0;i<=(n/2);i++){
          if (num==arr[i]){
            return i;
          }
       }
       return -1;
    }
    else if (num>arr[n/2]){
       for(i=(n/2);i<n;i++){
          if (num==arr[i]){
            return i;
          }
       }
    return -1;
}
    else
       return n/2;
}

int main(void){

   time_t Time;
   Time=time(NULL);
   struct tm *Tm=localtime(&Time);
   printf("\n\e[1mWelcome To Program\n%.2d : %.2d : %.2d  %.2d / %.2d / %.2d",Tm->tm_hour,Tm->tm_min,Tm->tm_sec,Tm->tm_mday,Tm->tm_mon+1,Tm->tm_year+1900);
   int n,*arr,result,life=3,temp;
   char ch;
   printf("\n\e[1;35mHow Many Number Do You Want To Write into Array:\e[0m ");
   scanf("%d",&n);
   arr=(int*)calloc(n,sizeof(int));
   srand(Time);
   for(int i=0;i<n;i++){
        *(arr+i)=rand() %10;
        cout<<endl<<arr[i];
    }
    while (life>0){
    result=Search(arr,n);
    if (result==-1){
        cout<<endl<<"\033[1;4;31mNot Found!..\033[0m\a\n";
        life--;
    }
    else{
       
          cout<<endl<<"\033[1;32mSearched Number is Found Index Number Of Array : "<<result;
       
        
        while(1){
            fflush(stdin);
            cout<<endl<<"\033[1;34mWould You Like To Continue (Y/N) ? :\e[0m ";cin>>ch;

            if (ch=='Y' || ch=='y'){
                Sleep(2000);
                break;
            }
            else if (ch=='N' || ch=='n'){
                Time=time(NULL);
                struct tm *Tm=localtime(&Time);
                printf("\n\e[1;32mHave a Good Days\n%.2d : %.2d : %.2d  %.2d / %.2d / %.2d\e[0m\n",Tm->tm_hour,Tm->tm_min,Tm->tm_sec,Tm->tm_mday,Tm->tm_mon+1,Tm->tm_year+1900);
                _exit(0);
            }
            else{
                cout<<endl<<"\033[1;4;31mWrong Character...\nPlease Write Again!..\033[0m";
            }
            
        }
    }
    
}
}