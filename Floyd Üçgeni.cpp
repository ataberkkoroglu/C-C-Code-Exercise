#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<conio.h>
#include<unistd.h>

int main(void){
	setlocale(LC_ALL,"Turkish");
	printf("Programa Hoþgeldiniz...");
	int n,e=1,i=0,sayac=0,k=1;
	char sec;
	while(1){
	printf("\nKaçýncý Satýra Kadar Floyd Üçgeni Oluþturmak Ýstiyorsunuz? : ");
	scanf("%d",&n);
	if (n!=0){
		n=abs(n);
	}
e=1;
i=0;
sayac=0;
k=1;
while(i<n){
	i++;
	
	//printf("%d\n",e);
	/*for (e=0;e<sayac;e++){
		printf("%d ",e+1);
		
	}*/
	
	//e=sayac;
	for (e=sayac;e<sayac+k;e++){
		printf("%d ",e+1);
	}
	printf("\n");
	sayac +=k;
	k++;

}   

	printf("\nDevam Etmek Ýstiyor Musunuz(E/H) ? : ");
	sec=getche();
	if (sec=='E'||sec=='e'){
		printf("\nDevam Ediliyor...");
	}
	else if (sec=='H'||sec=='h'){
		printf("\nYine Bekleriz...");
		break;
	}
	else{
		printf("\nYanlýþ Girildi...\a");
	}
}
}

