#include<stdio.h>
#include<string.h>
#include<locale.h>
#include<time.h>
#include<conio.h>
#include<Windows.h>

int Alphabetics( char ch){
    strupr(&ch);
    if (ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
           return 1;
    else if ((ch>=65 && ch<=90))
          return 0;
    else
          return -1;

}

int main(void){
     char kr,ch;
     setlocale(LC_ALL,"Turkish");
     time_t Time;
     Time=time(NULL);

     struct tm *Tm=localtime(&Time);
     printf("\n\e[1mWelcome To Program...\n%.2d : %.2d : %.2d  %.2d / %.2d / %.2d",Tm->tm_hour,Tm->tm_min,Tm->tm_sec,Tm->tm_mday,Tm->tm_mon+1,Tm->tm_year+1900);
     while(1){

        printf("\n\e[1;35mWrite a Character:\e[0m ");scanf("%c",&kr);fflush(stdin);

        if(Alphabetics(kr)==-1){
           printf("\n\e[1;4;31mInvalid Process...\nPlease Write Again...\n\a\e[0m");Sleep(2000);continue;
        }
        else if (Alphabetics(kr)==0)
          printf("\n\e[1;37m%c\e[1;31m is Constonant...",kr);
        else{
            printf("\n\e[1;37m%c\e[1;32m is Wovel...",kr);
        }
        while(1){
            printf("\n\e[1;36mWould You Like To Contunie (Y/N) ? : ");ch=getche();
            if (ch=='Y' || ch=='y'){
                Sleep(2000);break;
            }
            else if (ch=='N' || ch=='n'){
                Time=time(NULL);
                Tm=localtime(&Time);
                printf("\n\e[1;32mHave a Good Days...\n%.2d : %.2d : %.2d  %.2d / %.2d / %.2d\e[0m",Tm->tm_hour,Tm->tm_min,Tm->tm_sec,Tm->tm_mday,Tm->tm_mon+1,Tm->tm_year+1900);
                _exit(0);
            }
            else
                printf("\n\e[1;4;31mWrong Character...\nPlease Write Again...\e[0m\a\n");

        }
     }
}
