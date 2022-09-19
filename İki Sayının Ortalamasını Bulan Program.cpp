#include <stdio.h>
#include<locale.h>

float ortalama(int a,int b){
	float ortalama;
	ortalama=(a+b)/2.0;
	return ortalama;
}

main(){
	setlocale(LC_ALL,"Turkish");
	printf("Ýki Sayýnýn Ortalamasýný Bulan Programa Hoþgeldiniz...\n");
	int sayi,sayi2;
	printf("1. Sayýyý Giriniz: ");
	scanf("%d",&sayi);
	printf("2. Sayýyý Giriniz: ");
	scanf("%d",&sayi2);
	double ort=ortalama(sayi,sayi2);
	printf("\nGirilen Ýki Sayýnýn Ortalamasý:%lf ",ort);
}
