#include<stdio.h>
#include<locale.h>

main(){
	setlocale(LC_ALL,"Turkish");
	float x;
	float y;
	float kdv;
	printf("Ürünüzün Geliþ Fiyatýný Giriniz= ");
	scanf("%f",&x);
	printf("\nÜrünüzün KDV oranýný Giriniz= ");
	scanf("%f",&kdv);
	y=x+x*kdv/100;
	printf("Ürünüzün Satýþ Fiyatý :%.2f",y);
	return 0;
}
