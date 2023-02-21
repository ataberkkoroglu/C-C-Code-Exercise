#include<iostream>
#include<time.h>
#include<conio.h>
#include<string.h>

using namespace std;

inline void Program(){
    time_t Time;
    Time=time(0);
    struct tm *Tm=localtime(&Time);
    char Text[300],number[]={'0','1','2','3','4','5','6','7','8','9'},ch;
    int count[10],total,counter=0;
    cout<<"Welcome To Program...\n"<<Tm->tm_hour<<" : "<<Tm->tm_min<<" : "<<Tm->tm_sec<<"  "<<Tm->tm_mday<<" . "<<Tm->tm_mon+1<<" . "<<Tm->tm_year+1900;
    while(1){
        int count[10],total,counter=0;
        printf("\nWrite Your Text: ");cin.getline(Text,300);
        for(int i=0;i<=strlen(number);i++){
            total=0;
            for(int e=0;e<=strlen(Text);e++){
                if (number[i]==Text[e]){
                    total++;
                }
            }
            count[counter]=total;
            counter++;
        }
        for(int y=0;y<10;y++){
            printf("%d ",y);
        }
        printf("\n");
        for(int k=0;k<10;k++){
           printf("%d ",count[k]);
        }
   while(1){
      printf("\nWould You Like To Contunie (Y/N) ? : ");ch=getche();
        if (ch=='Y' || ch=='y'){
            break;
        }
        else if (ch=='N' || ch=='n'){
            printf("\nHave a Good Days...\n%d: %d : %d  %d.%d.%d",Tm->tm_hour,Tm->tm_min,Tm->tm_sec,Tm->tm_mday,Tm->tm_mon+1,Tm->tm_year+1900);
            exit(1);
        }
        else{
            printf("\nWrong Character...\nPlease Write Again...");
    }
    }
    }
}
int main(void){
   Program();

}