#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<unistd.h>
#include<stdlib.h>
#include<math.h>
double Kare(int sayi,int sayi2){
	int a=pow(sayi,2);
	int b=pow(sayi2,2);
	return a+b;
}
int main(void){
	setlocale(LC_ALL,"Turkish");
	printf("Programa Ho�geldiniz...\n");
	int sayi,sayi2;
	char sec;
	while(1){
	printf("\n1.Say�y� Giriniz: ");
	scanf("%d",&sayi);
	printf("\n2.Say�y� Giriniz: ");
	scanf("%d",&sayi2);
    int a=Kare(sayi,sayi2);
    printf("%d ve %d Say�lar�n�n Kareleri Toplam�: %d",sayi,sayi2,a);
	printf("\nDevam Etmek �stiyor Musunuz(E/H) ? : ");
	sec=getche();
	if (sec=='E'||sec=='e'){
		printf("\nPrograma Devam Ediliyor...");
		sleep(3);
	}
	else if(sec=='H'||sec=='h'){
		printf("\nYine Bekleriz...");
		exit(3);
	}
	else{
		printf("\nYanl�� Girildi...\a");
		abort();
	}
}
}
