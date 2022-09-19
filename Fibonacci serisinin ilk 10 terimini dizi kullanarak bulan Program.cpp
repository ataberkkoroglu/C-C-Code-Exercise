#include<stdio.h>
#include<locale.h>

main(){
	setlocale(LC_ALL,"Turkish");
	printf("Programa Hoþgeldiniz...\n");
	int sayi[10],toplam=1,a,b;
	printf("%d\n",toplam);
	sayi[0]=toplam;
	for(int i=0;i<2;i++){
		toplam=toplam+i;
		sayi[i+1]=toplam;
		printf("%d\n",toplam);
	}
    for(int e=3;e<10;e++){
    	sayi[e]=sayi[e-1]+sayi[e-2];
    	printf("%d\n",sayi[e]);
	}
	
	
}
