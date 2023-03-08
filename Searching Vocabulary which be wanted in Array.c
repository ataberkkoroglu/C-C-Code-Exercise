#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<time.h>
#include<string.h>
#include<stdlib.h>

int main(void){
    time_t Time;
    Time=time(0);
    struct tm *Tm=localtime(&Time);
    printf("\e[1mWelcome To Program...\n%d : %d : %d  %d.%d.%d\n",Tm->tm_hour,Tm->tm_min,Tm->tm_sec,Tm->tm_mday,Tm->tm_mon+1,Tm->tm_year+1900);
    int Program(char *Text,char *keyword);
    while (1){
      char text[3][20],ch;
      char keyword[20];int counter=0;
      printf("\n\e[0mWrite Your Text: ");
      for (int i=0;i<3;i++){
        scanf("%s %s %s",&text[i],&text[i+1],&text[i+2]);
        
        break;
      }
      fflush(stdin);
      printf("\nwrite a Keyword: ");gets(keyword);
      for (int e=0;e<3;e++){
         int result=Program(text[e],keyword);
         if (result!=0){
              counter++;
            }
            
         }
        printf("\n\e[1mNumber of Your Keyword in Array is \e[0m%d ",counter);
         
      
      
      while(1){
        printf("\n\e[1mWould You Like To Contunie (Y/N) ? : ");ch=getche();
        if (ch=='Y' ||  ch=='y'){
            Sleep(3000);
            break;
        }
        else if (ch=='N' || ch=='n'){
            Time=time(0);
            struct tm *Tm=localtime(&Time);
            printf("\nHave a Good Days...\n%d : %d : %d  %d.%d.%d",Tm->tm_hour,Tm->tm_min,Tm->tm_sec,Tm->tm_mday,Tm->tm_mon+1,Tm->tm_year+1900);
            _Exit(1);
        }
        else{
            printf("\nWrong Character...Please Write Again...");
        }
      }
    }
    
    
}

int Program(char *Text,char *keyword){
    //printf("\nText : %s Keyword: %s\n",Text,keyword);
    static int counter=0;
    Text=strlwr(Text);
    keyword=strlwr(keyword);
    if(strcmp(Text,keyword)==0 && counter==0){
        counter++;
        return counter;
    } 
    else if (strcmp(Text,keyword)==0 && counter!=0){
        counter++;
        return counter;
    }  
    else{
        return 0;
    }
   
}