#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL,"Turkish");
	printf("Kullan�c�y� Ya��na G�re �ocuk, Gen� ve Ya�l� Olarak S�n�fland�ran Programa Ho�geldiniz...");
	int yas;
	int i=0;
	while (i<3){
	printf("\nYa��n�z� Giriniz: ");
	scanf("%d",&yas);
	if (yas<18 && yas>=0){
		printf("\nSiz �ocuksunuz.");
		break;
	}
	else if (yas>=18 &&yas<50){
		printf("\nSiz Gen�siniz.");
		break;
	}
	else if (yas>50){
		printf("\nSiz Ya�l�s�n�z.");
		break;
	}
	else {
		printf("\nYanl�� Girdiniz\t L�tfen Tekrar Deneyiniz...\n");
		i++;
	}
}
}
