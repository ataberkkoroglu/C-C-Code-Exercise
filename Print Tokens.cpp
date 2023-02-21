#include<stdio.h>
#include<time.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

int main(void){
    
    time_t Time;
    Time=time(0);
    FILE *fp;
   
    struct tm *Tm=localtime(&Time);
    printf("\nWelcome To Program...\n%d : %d : %d %d.%d.%d",Tm->tm_hour,Tm->tm_min,Tm->tm_sec,Tm->tm_mday,Tm->tm_mon+1,Tm->tm_year+1900);
    char *Text,ch,ch2;
    Text=(char *)  calloc(3000,sizeof(char));
    while(1){
    #if (fp==NULL)
        try{
        fp=fopen("C:/Users/asus/Desktop/Text.txt","a+");
        if (fp==NULL){
              throw 0;
        }
        
    }
    catch(int){
        printf("\nThis File Couldn't Be Created...");
    }
    
    #else
     while(1){
         printf("\nWould You Like To Contunie With Existed File(Y/N) :  ");ch2=getche();
      if (ch2=='Y' || ch2=='y'){
          try{
        fp=fopen("C:/Users/asus/Desktop/Text.txt","a+");
        if (fp==NULL){
              throw 0;
        }
        else{
            break;
        }
        
    }
    catch(int){
        printf("\nThis File Couldn't Be Opened...");
    }
      }
      else if (ch2=='N' || ch2=='n'){
        try{
        fp=fopen("C:/Users/asus/Desktop/Text.txt","w");
        if (fp==NULL){
              throw 0;
        }
        else{
            break;
        }
        
    }
    catch(int){
        printf("\nThis File Couldn't Be Created...");
    }
      }
    else{
        printf("\nWrong Character...\nPlease Write Again...");
    }
     }
 
    #endif
    
     
    printf("\nWrite Your Text Without including Turkish Character: ");gets(Text);
    printf("\n");
    Text=(char *) realloc (Text,3000-strlen(Text));
    for(int i=0;i<=strlen(Text);i++){
        
        if (Text[i]==' '){
            fprintf(fp,"\n");
            printf("\n");
        }
        else{
            
            fprintf(fp,"%c",Text[i]);
            printf("%c",Text[i]);
        }
    }
    fclose(fp);
    while(1){
      printf("\nWould You Like To Contunie (Y/N) ? : ");ch=getche();
        if (ch=='Y' || ch=='y'){
            fseek(fp,sizeof(Text),SEEK_SET);
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