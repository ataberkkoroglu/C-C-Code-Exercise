#include<stdio.h>
#include<locale.h>
#include<conio.h>
#include<stdlib.h>
#include<unistd.h>
int main(void){
	setlocale(LC_ALL,"Turkish");
	printf("Koordinat Sisteminde B�lgeyi Bulma Program�na Ho�geldiniz...");
	int x,y,a,b;
	char sec;
	while(1){
	printf("\nx Eksenindeki Say�: ");
	scanf("%d",&x);
	printf("\nY eksenindeki Say�: ");
	scanf("%d",&y);
    if (x>0 && y>0){
    	printf("\n1.B�lge");
	}
	else if (x<0 && y>0){
    	printf("\n2.B�lge");
	}
	else if (x<0 && y<0){
    	printf("\n3.B�lge");
	}
	else{
		printf("\n4.B�lge");
	}
	while(1){
	printf("\nDevam Etmek �ster Misiniz(E/H) ? : ");
	sec=getche();
	if (sec=='E'||sec=='e'){
		printf("\nDevam Ediliyor...");
		sleep(3);
		break;
	}
	else if (sec=='H'||sec=='h'){
		printf("\nYine Bekleriz...");
		exit(1);
	}
	else{
		printf("\nYanl�� Girdiniz...\a");
	}
}
}
}
