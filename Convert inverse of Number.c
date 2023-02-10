#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<unistd.h>
#include<time.h>

int main(void){
time_t Time;
Time=time('\0');
printf("Welcome To Program...\n%s",ctime(&Time));
char num[15],ch;
while(1){
    printf("\nWrite a Number: ");scanf("%s",num);
    printf("\nNumber: %s",num);

    printf("\nReverse of Given Number: %s",strrev(num));
    while(1){
        printf("\nWould You Like To Contunie (Y/N) ? : ");ch=getche();
        if(ch=='Y' || ch=='y'){
            sleep(2);break;
        }
        else if (ch=='N' || ch=='n'){
            printf("\nHave a Good Days...");
            exit(1);
        }
        else{
            printf("\nWrong Character...\nPlease Write Again...\a");
        }
    }
}

}
