#include<stdio.h>
#include<locale.h>
#include<conio.h>
#include<stdlib.h>
int main(void){
	setlocale(LC_ALL,"Turkish");
	printf("Programa Hoþgeldiniz...");
	int sayi ;
	int sayac=0;
	char sec;
	while(1){
	
	printf("\nGirmek Ýstediðiniz Sayýyý Giriniz: ");
	scanf("%d",&sayi);
	for(int i=2;i<(sayi)/2.0;i++){
		if(sayi%i==0){
			printf("\n%d Sayýsý Asal Sayý Deðildir.",sayi);
			sayac++;
			break;
		}
	}
if(sayac!=1){
	printf("\n%d Sayýsý Asal Sayýdýr.",sayi);
}
printf("\nDevam Etmek Ýstiyor Musunuz(E/H) ? :");
sec=getche();
if (sec=='E'||sec=='e'){
	printf("\nPrograma Devam Ediliyor...");
}
else if(sec=='H'|| sec=='h'){
	printf("\nYine Bekleriz...");
	exit(3);
}
else{
	printf("\nYanlýþ Girildi...");
	abort();
}
}
}
