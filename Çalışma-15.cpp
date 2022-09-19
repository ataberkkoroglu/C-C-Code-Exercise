#include<stdio.h>
#include<locale.h>

int main(void){
	setlocale(LC_ALL,"Turkish");
	printf("Programa Hoþgeldiniz...");
	char Metin[]={"Badem ve Ýpek"};
	char harf;
	printf("\nAramak Ýstediðiniz Harfi Giriniz:  ");
    scanf("%c",&harf);
    int sayac=0;
	for(int i=0;i<3000;i++){
		if(Metin[i]==harf){
		      sayac++;
		}
		if (Metin[i]=='\0'){
			break;
		}
	}
if (sayac!=0){
	printf("%c Harfi Bu Metinde %d Tane Var.",harf,sayac);
}
}
