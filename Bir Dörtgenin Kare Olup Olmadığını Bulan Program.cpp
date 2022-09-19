#include<iostream>
using namespace std;
main(){
	setlocale(LC_ALL,"Turkish");
	printf("Bir Dörtgenin Kare Olup Olmadýðýný Bulan Programa Hoþgeldiniz...\n");
	float kenar[4];
	for (int i=0;i<4;i++){
		printf("\nDikdörtgenin Kenarýný Giriniz:");
		scanf("%f",&kenar[i]);
		
}
	if (kenar[0]==kenar[1] && kenar[0]==kenar[2] && kenar[0]==kenar[3] && kenar[1]==kenar[2] && kenar[1]==kenar[3] && kenar[2]==kenar[3]){
		printf("\nBu Dörtgen Bir Karedir.");
	}
	else {
		printf("\nBu Dörtgen Kare Deðildir.");
	}
	
}
