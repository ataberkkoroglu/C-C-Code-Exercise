#include<stdio.h>
#include<locale.h>
#include<unistd.h>
#include<conio.h>

void PerfectNumber(int x){
	int toplam=0;
	
	for (int i=1;i<x;i++){
		if (x%i==0){
			toplam +=i;
			
		}
	}
	if (toplam==x){
			printf("\nThis Number is Perfect Number...");
		}
	else{
		printf("\nThis Number isn't Perfect Number...");
	}
}

int main(void){
	setlocale(LC_ALL,"Turkish");
	printf("Welcome To Program...");
	char sec;
	int sayi;
	while(1){
	printf("\nType Your Number : ");
	scanf("%d",&sayi);
	PerfectNumber(sayi);
	while(1){
		printf("\nWould You Like To Contunie(Y/N) ? : ");
		sec=getche();
		if (sec=='Y'||sec=='y'){
			sleep(2);
			break;
		}
		else if(sec=='N' ||sec=='n'){
			printf("\nHave a Good Days...");
			exit(1);
		}
	    else{
	    	printf("\nWrong Input...\a");
		}
	}
}
}
