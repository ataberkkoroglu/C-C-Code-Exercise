#include<stdio.h>
#include<locale.h>
#include<conio.h>
#include<unistd.h>
#include<stdlib.h>

int main(void){
	setlocale(LC_ALL,"Turkish");
	printf("Programa Ho�geldiniz...\n");
	int n,m,a;
	printf("1.Diziniz Ka� Elemanl� Olacak? : ");
	scanf("%d",&n);
	printf("2.Diziniz Ka� Elemanl� Olacak? : ");
	scanf("%d",&m);
	a=m+n;
	int x[n],y[m],z[a];
	
	for (int i=0;i<n;i++){
		printf("\n1.Dizi i�in %d. Say�y� Giriniz: ",i+1);
		scanf("%d",&x[i]);
	}
	for (int e=0;e<m;e++){
		printf("\n2.Dizi i�in %d. Say�y� Giriniz: ",e+1);
		scanf("%d",&y[e]);
}
 for (int i=0;i<n;i++){
 	z[i]=x[i];
 }
 for(int e=5;e<a;e++){
 	z[e]=y[e-5];
 }
 for (int k=0;k<a;k++){
 	printf("\n%d. Say�: %d",k+1,z[k]);
 }
}
