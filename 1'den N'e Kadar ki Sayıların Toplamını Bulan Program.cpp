#include<stdio.h>
#include<locale.h>

main(){
	setlocale(LC_ALL,"Turkish");
	printf("1'den N'e Kadar ki Sayýlarýn Toplamýný Bulan Programa Hoþgeldiniz...\n");
	int N,i,toplam,toplam2,toplam3;
	printf("Girmek Ýstediðiniz Sayýyý Giriniz= ");
	scanf("%d",&N);
	toplam=0;
	for(i=1;i<=N;i++){
		toplam=toplam+i;
		if (i%2==0){
			toplam2=toplam2+i;
		}
		else {
			toplam3=toplam3+i;
		}
	}
	printf("Tüm Sayýlarýn Toplamý: %d\n",toplam);
	printf("Tüm Çift Sayýlarýn Toplamý: %d",toplam2);
	printf("\nTüm Tek Sayýlarýn Toplamý: %d",toplam3);
	
}
