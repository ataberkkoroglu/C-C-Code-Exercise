#include<iostream>
using namespace std;
main(){
	setlocale(LC_ALL,"Turkish");
	printf("Bir D�rtgenin Kare Olup Olmad���n� Bulan Programa Ho�geldiniz...\n");
	float kenar[4];
	for (int i=0;i<4;i++){
		printf("\nDikd�rtgenin Kenar�n� Giriniz:");
		scanf("%f",&kenar[i]);
		
}
	if (kenar[0]==kenar[1] && kenar[0]==kenar[2] && kenar[0]==kenar[3] && kenar[1]==kenar[2] && kenar[1]==kenar[3] && kenar[2]==kenar[3]){
		printf("\nBu D�rtgen Bir Karedir.");
	}
	else {
		printf("\nBu D�rtgen Kare De�ildir.");
	}
	
}
