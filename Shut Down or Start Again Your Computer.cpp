#include<stdio.h>
#include<locale.h>
#include<time.h>
#include<stdlib.h>
#include<conio.h>

int main(void){
	setlocale(LC_ALL,"Turkish");
	time_t Time;
	char ch;
	int sc;
	Time=time('\0');
	printf("Welcome To Program...\n%s",ctime(&Time));
	while(1){
		
	printf("Would You Like To Shut Down Or Restart Your Computer (Y/N) ? ");
	ch=getche();
	if (ch=='Y' || ch=='y'){
		while(1){
		printf("\n1-Shut Down\n2-Restart\nWhich Process Do You Want To Do(1/2) ? : ");
		scanf("%d",&sc);
		if (sc==1){
			printf("\nYour Computer Will Be Shutted Down Soon...\a");
	        system("Shutdown /s");
	        exit(1);
		}
		else if (sc==2){
			printf("\nYour Computer Will Be Restarted...\a");
	        system("Shutdown /r");
	        exit(1);
		}
		else{
			printf("\nInvalid Process...\a");
		}
		}
	}
	else if (ch=='N' || ch=='n'){
		exit(1);
	}
	else{
		printf("\nwrong Input...\a");
	}	
		
	}
	
}

