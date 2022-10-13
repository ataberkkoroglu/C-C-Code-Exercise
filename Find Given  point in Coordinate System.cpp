#include<stdio.h>
#include<locale.h>
#include<conio.h>
#include<stdlib.h>
#include<unistd.h>
int main(void){
	setlocale(LC_ALL,"Turkish");
	printf("Koordinat Sisteminde Bölgeyi Bulma Programýna Hoþgeldiniz...");
	int x,y,a,b;
	char sec;
	while(1){
	printf("\nx Eksenindeki Sayý: ");
	scanf("%d",&x);
	printf("\nY eksenindeki Sayý: ");
	scanf("%d",&y);
    if (x>0 && y>0){
    	printf("\n1.Bölge");
	}
	else if (x<0 && y>0){
    	printf("\n2.Bölge");
	}
	else if (x<0 && y<0){
    	printf("\n3.Bölge");
	}
	else{
		printf("\n4.Bölge");
	}
	while(1){
	printf("\nDevam Etmek Ýster Misiniz(E/H) ? : ");
	sec=getche();
	if (sec=='E'||sec=='e'){
		printf("\nDevam Ediliyor...");
		sleep(3);
		break;
	}
	else if (sec=='H'||sec=='h'){
		printf("\nYine Bekleriz...");
		exit(1);
	}
	else{
		printf("\nYanlýþ Girdiniz...\a");
	}
}
}
}
