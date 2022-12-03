#include<stdio.h>
#include<unistd.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
#define randnum(min,max) ((rand() % (int) (((max) + 1) - (min))) + (min))
int Random(int a,int b){
	srand(time(NULL));
	int sayi;
	sayi=randnum(a,b);
	return sayi;
}

int main(void){
	time_t time_1970;
	time_1970=time('\0');
	printf("Welcome To Program...\n%s",ctime(&time_1970));
	const int a=1,b=10;
	char ch;
	int sayi;
	while(1){
	int i=3;
	sayi=Random(a,b);
	while(0<i){	
	int x;
	printf("\nWrite a Number: ");
	scanf("%d",&x);
	
	if (sayi==x){
		printf("\nCongrulations...");
	}
	else{
		printf("\nWrong Number...");
		i--;
	}
	while(1){
		printf("\nWould You Like To Contunie(Y/N) ? : ");
		ch=getche();
		if (ch=='Y'|| ch=='y'){
			sleep(1);
			break;
		}
		else if (ch=='N' or ch=='n'){
			printf("\nHave a Good Days...");
			printf("\nNumber: %d",sayi);
			exit(1);
		}
		else{
			printf("\nWrong Input...\a");
		}
	}
}
printf("\nNumber: %d",sayi);
}
}
