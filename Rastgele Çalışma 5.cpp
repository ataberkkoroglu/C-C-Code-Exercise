#include<stdio.h>
#include<locale.h>

int main(void){
	setlocale(LC_ALL,"Turkish");
	printf("Programa Hoþgeldiniz...\n");
	int sayi[2];
	for (int i=0;i<2;i++){
		printf("%d. Sayýyý Giriniz: ",i+1);
		scanf("%d",&sayi[i]);
	}
	if(sayi[0]==sayi[1]){
		printf("%d",sayi[0]%4);
	}
}
