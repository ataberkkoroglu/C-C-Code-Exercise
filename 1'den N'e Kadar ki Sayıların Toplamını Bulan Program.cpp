#include<stdio.h>
#include<locale.h>

main(){
	setlocale(LC_ALL,"Turkish");
	printf("1'den N'e Kadar ki Say�lar�n Toplam�n� Bulan Programa Ho�geldiniz...\n");
	int N,i,toplam,toplam2,toplam3;
	printf("Girmek �stedi�iniz Say�y� Giriniz= ");
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
	printf("T�m Say�lar�n Toplam�: %d\n",toplam);
	printf("T�m �ift Say�lar�n Toplam�: %d",toplam2);
	printf("\nT�m Tek Say�lar�n Toplam�: %d",toplam3);
	
}
