#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<conio.h>
#include<unistd.h>
int ElemanBulma(int *a,int b,int c){
	printf("\nFonksiyon Çalýþtý.");
}
int main(void){
	setlocale(LC_ALL,"Turkish");
	printf("Programa Hoþgeldiniz...");
	int x,y,temp,temp2;
	printf("\nKaç Tane Sayý kumesi Oluþturmak Ýstiyorsunuz? : ");
	scanf("%d",&x);
	printf("\nSayý Kumelerine Kaç Tane Sayý Eklemek Ýstiyorsunuz? : ");
	scanf("%d",&y);
	int sayi[x][y];
	for (int i=0;i<x;i++){
		for (int e=0;e<y;e++){
			printf("\n%d.Kümenin %d. Elemanýný Giriniz: ",i+1,e+1);
			scanf("%d",&sayi[i][e]);
		}
	}

	for(int t=0;t<x;t++){
    for (int k=0;k<y;k++){
    	if(sayi[t][k]>sayi[t][k+1]){
    		temp=sayi[t][k+1];
    		sayi[t][k+1]=sayi[t][k];
    		sayi[t][k]==temp;
		}
	}	
}
 for(int k=0;k<x;k++){
 	   if (sayi[k][1]>sayi[k+1][1]){
 		    temp2=sayi[k+1][1];
    		sayi[k+1][1]=sayi[k][1];
    		sayi[k][1]==temp2;
}
}
ElemanBulma(*sayi,x,y);
printf("\nDizideki En Büyük Sayý: %d",sayi[x-1][y-1]);
}

