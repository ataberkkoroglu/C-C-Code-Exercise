#include<stdio.h>
#include<locale.h>
#include<conio.h>
#include<stdlib.h>
int main(void){
	setlocale(LC_ALL,"Turkish");
	printf("�s Alma Program�na Ho�geldiniz...");
	int sayi,us,carpim;
	char sec;
	while(1){
	printf("\n�ss�n� Almak �stedi�iniz Say�y� Yaz�n�z: ");
	scanf("%d",&sayi);
	printf("\n%d Say�s�n�n Ka��nc� �ss�n� Almak �stiyorsunuz: ",sayi);
	scanf("%d",&us);
	carpim=1;
	for(int i=1;i<=us;i++){
		carpim *=sayi;
	}
	printf("\n%d �zeri %d: %d",sayi,us,carpim);
	printf("\nDevam Etmek �stiyor Musunuz(E/H) ? : ");
	sec=getche();
	if(sec=='E' || sec=='e'){
		printf("\nPrograma Devam Ediliyor...");
		
	}
	else if(sec=='H'||sec=='h'){
		printf("\nYine Bekleriz...");
		exit(3);
	}
	else{
		printf("\nYanl�� Girildi...");
		abort();
	}
}
}

