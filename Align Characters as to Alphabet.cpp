#include<stdio.h>
#include<locale.h>
#include<conio.h>
#include<unistd.h>
#include<string.h>

int main(void){
	setlocale(LC_ALL,"Turkish");
	printf("Welcome To Program...\n");
	char Alignment(char *essay,int b);
	char ch;
	while(1){
	   char essay[300];
	   printf("\nWrite Your Text: ");
	   gets(essay);
	   fflush(stdin);
	   Alignment(essay,strlen(essay));
	   while(1){
	   	printf("\nWould You Like To Contunie (Y/N) ? : ");
	   	ch=getche();
	   	if(ch=='y'||ch=='Y'){
	   		sleep(2);
	   		break;
		   }
		else if (ch=='N' || ch=='n'){
			printf("\nHave a Good Days...");
			exit(1);
		}
		else{
			printf("\nWrong Input...\a");
		}
	   }
	}

}

char Alignment(char *essay,int b){
	char temp;
	essay=strlwr(essay);
	for (int i=0;i<b;i++){
		for(int k=i+1;k<strlen(essay);k++){
	
		 if (essay[i]>essay[k]){
			temp=essay[i];
			essay[i]=essay[k];
			essay[k]=temp;	
			//printf("\n%c %c",essay[k],essay[k+1]);
		}
		else{
			//printf("A");
		}
	}
}
printf("\n%s",essay);

}
