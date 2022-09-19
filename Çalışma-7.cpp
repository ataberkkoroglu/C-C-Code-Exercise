#include<stdio.h>
#include<locale.h>

int main(void){
	setlocale(LC_ALL,"Turkish");
	printf("Programa Hoþgeldiniz...");
	int sayi[5];
	void Siralama(int *sayi,int b);
	for(int i=0;i<5;i++){
		printf("\n%d. Sayýyý Giriniz: ",i+1);
		scanf("%d",&sayi[i]);
	}
		Siralama(sayi,5);

printf("Girilen Sayýlardan En Büyüðü: %d Ve En Küçüðü: %d",sayi[5],sayi[0]);

}
void Siralama(int *sayi,int b){
	    int temp;

	    	for (int e=0;e<5;e++){
		if (sayi[e]>sayi[e+1]){
			temp=sayi[e];
			sayi[e]=sayi[e+1];
			sayi[e+1]=temp;
		}
	}
		for (int e=0;e<5;e++){
		if (sayi[e]>sayi[e+1]){
			temp=sayi[e];
			sayi[e]=sayi[e+1];
			sayi[e+1]=temp;
		}
	}
		for (int e=0;e<5;e++){
		if (sayi[e]>sayi[e+1]){
			temp=sayi[e];
			sayi[e]=sayi[e+1];
			sayi[e+1]=temp;
		}
	}
		for (int e=0;e<5;e++){
		if (sayi[e]>sayi[e+1]){
			temp=sayi[e];
			sayi[e]=sayi[e+1];
			sayi[e+1]=temp;
		}
	}
}
