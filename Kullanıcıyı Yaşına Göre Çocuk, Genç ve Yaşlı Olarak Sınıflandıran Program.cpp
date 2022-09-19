#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL,"Turkish");
	printf("Kullanýcýyý Yaþýna Göre Çocuk, Genç ve Yaþlý Olarak Sýnýflandýran Programa Hoþgeldiniz...");
	int yas;
	int i=0;
	while (i<3){
	printf("\nYaþýnýzý Giriniz: ");
	scanf("%d",&yas);
	if (yas<18 && yas>=0){
		printf("\nSiz Çocuksunuz.");
		break;
	}
	else if (yas>=18 &&yas<50){
		printf("\nSiz Gençsiniz.");
		break;
	}
	else if (yas>50){
		printf("\nSiz Yaþlýsýnýz.");
		break;
	}
	else {
		printf("\nYanlýþ Girdiniz\t Lütfen Tekrar Deneyiniz...\n");
		i++;
	}
}
}
