#include<stdio.h>
#include<locale.h>

main(){
	setlocale(LC_ALL,"Turkish");
	float x;
	float y;
	float kdv;
	printf("�r�n�z�n Geli� Fiyat�n� Giriniz= ");
	scanf("%f",&x);
	printf("\n�r�n�z�n KDV oran�n� Giriniz= ");
	scanf("%f",&kdv);
	y=x+x*kdv/100;
	printf("�r�n�z�n Sat�� Fiyat� :%.2f",y);
	return 0;
}
