#include <stdio.h>

 int toplama(int a,int b){
	int toplam;

	 toplam=a+b;
	 printf("Sayilarýn toplami: %d",toplam)	;
	 if (toplam==a*2&& toplam==b*2){
	 	printf("\n2 Sayi Birbirine Esittir.");
	 }
	}	

 int cikarma(int c, int d){
	int cikarma=c-d;

	 printf("Bu Sayilarin Cikarmasi: %d",cikarma);
	 if (cikarma==0){
	 	printf("\n2 Sayi Birbirine Esittir.");
	 }
}

 int carpma(int e,int f){
	int carpma;
	
	 carpma=e*f;
	 printf("Bu Sayilarin Carpimi:%d",carpma);
	 if(carpma==e*e&&carpma==f*f){
	 	printf("\n2 Sayi Birbirine Esittir.");
	 }
	}
	

 int bolme(float g,float h){
	float bolme;
	 bolme=g/h;
	 printf("Bu Sayilarin Bolumu: %f",bolme);
	 if (bolme==1.0){
	 	printf("\n2 Sayi Birbirine Esittir.");
	 }
	}



int main(){
printf("Matematik Programina Hosgeldiniz...");
printf("\n2 tane Sayi Giriniz...");
int sayi1;
printf("\n1.Sayiyi Giriniz= ");
scanf("%d",&sayi1);
int sayi2;
printf("\n2.Sayiyi Giriniz= ");
scanf("%d",&sayi2);
 
 

int sec;
int i=0;
while (i<=3){

printf("'1'=Toplama,'2'=Cýkarma,'3'=Carpma,'4'=Bolme");
printf("\nYapmak Istediginiz Islemi Seciniz= ");
scanf("%d",&sec);
if(sec==1){
	toplama(sayi1,sayi2);
	break;
}
else if(sec==2){
	cikarma(sayi1,sayi2);
	break;
}
else if(sec==3){
	carpma(sayi1,sayi2);
	break;
}
else if(sec==4){
	bolme(sayi1,sayi2);
	break;
	}
else{

	i++;
	printf("Yanlis Deger Girdiniz...Lutfen Tekrar Deneyiniz...");
}
}
}
