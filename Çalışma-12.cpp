#include<stdio.h>
#include<locale.h>
#include<string.h>
int main(void){
	setlocale(LC_ALL,"Turkish");
	printf("Uygulamaya Ho�geldiniz...");
	char harf;
	int sayac=0;
	printf("\n1 Harf Giriniz: ");
	scanf("%c",&harf);
	char sesli[]={'a','e','i','o','�','u','�','�','A','E','�','O','�','U','�','I'};
	for (int i=0;i<strlen(sesli);i++){
		if(harf==sesli[i]){
			sayac=0;
			printf("\n%c harfi Sesli Harftir.",harf);
			break;
		}
		else{
			sayac++;
		}
	}
if (sayac!=0){
	printf("\n%c harfi Sesli Harf De�ildir.",harf);
}
}
