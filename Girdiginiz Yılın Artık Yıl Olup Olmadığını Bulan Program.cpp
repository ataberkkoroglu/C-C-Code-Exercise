#include<stdio.h>
#include<locale.h>

main(){
	setlocale(LC_ALL,"Turkish");
	printf("Girdiginiz Y�l�n Art�k Y�l Olup Olmad���n� Bulan Programa Ho�geldiniz...\n");
	int yil;
	printf("Girmek �stedi�iniz Y�l� Giriniz: ");
	scanf("%d",&yil);
	if (yil%4==0){
		printf("%d Y�l� Art�k Bir Y�ld�r.",yil);
	}
	else{
		printf("%d Y�l� Art�k Bir Y�l De�ildir.",yil);
	}
}
