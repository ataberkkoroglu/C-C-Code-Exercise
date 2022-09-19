#include<stdio.h>

int main(){
int sec;
printf("Devam Etmek icin'1' Devam Etmemek icin'0' giriniz= ");
scanf("%d",&sec);
switch (sec){

	case 0:
		printf("Islem Sonlandiriliyor...");
		break;
	case 1:
		printf("Program Calismaya Devam Ediyor...");
		break;
return 0;
}
}
