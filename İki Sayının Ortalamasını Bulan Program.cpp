#include <stdio.h>
#include<locale.h>

float ortalama(int a,int b){
	float ortalama;
	ortalama=(a+b)/2.0;
	return ortalama;
}

main(){
	setlocale(LC_ALL,"Turkish");
	printf("�ki Say�n�n Ortalamas�n� Bulan Programa Ho�geldiniz...\n");
	int sayi,sayi2;
	printf("1. Say�y� Giriniz: ");
	scanf("%d",&sayi);
	printf("2. Say�y� Giriniz: ");
	scanf("%d",&sayi2);
	double ort=ortalama(sayi,sayi2);
	printf("\nGirilen �ki Say�n�n Ortalamas�:%lf ",ort);
}
