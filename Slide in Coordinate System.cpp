#include<stdio.h>
#include<locale.h>
#include<conio.h>
int main(void){
	char yon;
	int x=0,y=0;
	while(1){
		printf("\nInput From Keyboard: ");
		yon=getche();
		if(yon=='a'){x +=1;}
		else if(yon=='d'){x -=1;}
		else if(yon=='s'){y +=1;}
		else if(yon=='w'){y -=1;}
		else{
			printf("\nWrong Value...\a");
			break;
		}
	printf("\nNew Position is(%d,%d)",x,y);
	}
	//printf("\nNew Position is(%d,%d)",x,y);
}
