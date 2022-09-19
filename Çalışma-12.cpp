#include<stdio.h>
#include<locale.h>
#include<string.h>
int main(void){
	setlocale(LC_ALL,"Turkish");
	printf("Uygulamaya Hoþgeldiniz...");
	char harf;
	int sayac=0;
	printf("\n1 Harf Giriniz: ");
	scanf("%c",&harf);
	char sesli[]={'a','e','i','o','ö','u','ü','ý','A','E','Ý','O','Ö','U','Ü','I'};
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
	printf("\n%c harfi Sesli Harf Deðildir.",harf);
}
}
