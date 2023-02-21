#include<stdio.h>
#include<time.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

int main(void){
    
    time_t Time;
    Time=time(0);
    struct tm *Tm=localtime(&Time);
    printf("\nWelcome To Program...\n%d : %d : %d %d.%d.%d",Tm->tm_hour,Tm->tm_min,Tm->tm_sec,Tm->tm_mday,Tm->tm_mon+1,Tm->tm_year+1900);
    char *Text,ch;
    Text=(char *)  calloc(3000,sizeof(char));
    while(1){
        printf("\nWrite Your Text Without including Turkish Character: ");gets(Text);
    printf("\n");
    Text=(char *) realloc (Text,3000-strlen(Text));
    for(int i=0;i<=strlen(Text);i++){
        if (Text[i]==' '){
            printf("\n");
        }
        else{
            printf("%c",Text[i]);
        }
    }
    while(1){
      printf("\nWould You Like To Contunie (Y/N) ? : ");ch=getche();
        if (ch=='Y' || ch=='y'){
            break;
        }
        else if (ch=='N' || ch=='n'){
            free(Text);
            printf("\nHave a Good Days...\n%d: %d : %d  %d.%d.%d",Tm->tm_hour,Tm->tm_min,Tm->tm_sec,Tm->tm_mday,Tm->tm_mon+1,Tm->tm_year+1900);
            exit(1);
        }
        else{
            printf("\nWrong Character...\nPlease Write Again...");
    }
    }
  
}
}