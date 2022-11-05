#include<stdio.h>
#include<locale.h>
#include<unistd.h>
#include<conio.h>

int main(){
	setlocale(LC_ALL,"Turkish");
	printf("Welcome To Program...");
	int sayi;
	char sec;
	void Triangle(int sayi);
	while(1){
		printf("\nWrite Your Number : ");
	scanf("%d",&sayi);
    Triangle(sayi);
	while(1){
		
	printf("\nWould You Like To Contunie(Y/N) ? : ");
	sec=getche();
	if (sec=='Y'||sec=='y'){
		sleep(3);
		break;
	}
	else if (sec=='N'||sec=='n'){
		printf("\nHave a Good Days...");
		exit(1);
	}
	else{
		printf("\nWrong Input...\a");
	}
}
}
}
void Triangle(int sayi){
	    int sayac=1;
		for (int i=0;i<=sayi;i++){
		for (int k=0;k<(sayi-i);k++){
			printf(" ");
		}
		for (int e=0;e<i;e++){
			if (sayac!=1){
				printf(" *");
			}
			else{
				printf("*");
			}
			
		}
	    sayac++;
		printf("\n");
	}
}
