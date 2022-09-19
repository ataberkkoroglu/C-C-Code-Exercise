#include<stdio.h>
#include<locale.h>
#include<conio.h>
#include<stdlib.h>
int main(void){
	setlocale(LC_ALL,"Turkish");
	printf("Üs Alma Programýna Hoþgeldiniz...");
	int sayi,us,carpim;
	char sec;
	while(1){
	printf("\nÜssünü Almak Ýstediðiniz Sayýyý Yazýnýz: ");
	scanf("%d",&sayi);
	printf("\n%d Sayýsýnýn Kaçýncý Üssünü Almak Ýstiyorsunuz: ",sayi);
	scanf("%d",&us);
	carpim=1;
	for(int i=1;i<=us;i++){
		carpim *=sayi;
	}
	printf("\n%d Üzeri %d: %d",sayi,us,carpim);
	printf("\nDevam Etmek Ýstiyor Musunuz(E/H) ? : ");
	sec=getche();
	if(sec=='E' || sec=='e'){
		printf("\nPrograma Devam Ediliyor...");
		
	}
	else if(sec=='H'||sec=='h'){
		printf("\nYine Bekleriz...");
		exit(3);
	}
	else{
		printf("\nYanlýþ Girildi...");
		abort();
	}
}
}

