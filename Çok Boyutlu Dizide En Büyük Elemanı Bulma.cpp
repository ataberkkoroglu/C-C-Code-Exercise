#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<conio.h>
#include<unistd.h>
int ElemanBulma(int *a,int b,int c){
	printf("\nFonksiyon �al��t�.");
}
int main(void){
	setlocale(LC_ALL,"Turkish");
	printf("Programa Ho�geldiniz...");
	int x,y,temp,temp2;
	printf("\nKa� Tane Say� kumesi Olu�turmak �stiyorsunuz? : ");
	scanf("%d",&x);
	printf("\nSay� Kumelerine Ka� Tane Say� Eklemek �stiyorsunuz? : ");
	scanf("%d",&y);
	int sayi[x][y];
	for (int i=0;i<x;i++){
		for (int e=0;e<y;e++){
			printf("\n%d.K�menin %d. Eleman�n� Giriniz: ",i+1,e+1);
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
printf("\nDizideki En B�y�k Say�: %d",sayi[x-1][y-1]);
}

