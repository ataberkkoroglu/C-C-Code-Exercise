#include<unistd.h>
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<conio.h>

int main(void){
	setlocale(LC_ALL,"Turkish");
	printf("Programa Hoþgeldiniz...");
	int Faktoriyel(int a);
	int x,a;
	char sec;
	while(1){
	printf("\nHangi Sayýnýn Faktöriyelini Almak Ýstiyorsunuz? : ");
	scanf("%d",&x);
	if (x>=0){
	a=Faktoriyel(x);
	printf("\n%d Sayýsýnýn Faktöriyeli Þudur: %d ",x,a);
}
   else{
   	printf("\nYanlýþ Deðer Girdiniz...");
   }
   printf("\nDevam Etmek Ýstiyor Musunuz(E/H) ? :");
   sec=getche();
   if(sec=='E'||sec=='e'){
   	  printf("\nDevam Ediliyor...");
   	  sleep(5);
   }
   else if(sec=='H'||sec=='h'){
   	  printf("\nYine Bekleriz...");
   	  exit(3);
   }
   else{
   	printf("\nYanlýþ Yazýldý...");
   	abort();
   }
}

}
int Faktoriyel(int a){
	int faktoriyel=1;
	for (int i=1;i<=a;i++){
		if (a==0){
		   printf("\n%d. Sayýsýnýn Faktöriyeli Þudur: %d",a,faktoriyel);
		   break;
		}
		else{
		faktoriyel *=i;
	}
}
return faktoriyel;
}
