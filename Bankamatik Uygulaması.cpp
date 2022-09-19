#include <stdio.h>
#include<string.h>
int main( ){
	
char Kullanici_Adi[10]="Ataberk";
int Sifre=2107;
char Istenecek_isim[10];
int Istenecek_sifre;
int i=0;
int bakiye=6500;
int yeni_bakiye;
while (i<=3){

printf("Bankamizin ATM'sine Hosgeldiniz...");
printf("\nKullanici Adinizi Giriniz= ");
scanf("%s",&Istenecek_isim);
	printf("Sifrenizi Giriniz= ");
    scanf("%d",&Istenecek_sifre);
if (strcmp(Kullanici_Adi,Istenecek_isim)==0){

	if (Istenecek_sifre==2107){
	
	 printf("\nPrograma Giris Yapiyorsunuz...");
	 int secim;
	 printf("\n[1]Para Cekme,[2]Para Yatirma,[3]Kredi Kartý Borcu Odeme,[4]Fatura Odeme,[5]Cýkýs.");
	 printf("\nYapmak Istediginiz Islemi Seciniz= ");
	 scanf("%d",&secim);
	 
	 if (secim==1){
		  int Para_Cekme;
	   	   printf("Cekmek Istediginiz Tutari Giriniz= ");
	   	   scanf("%d",&Para_Cekme);
	   	   bakiye=bakiye-Para_Cekme;
	   	   printf("\nParanýz Hazýrlanýyor...");
	   	   printf("\nCekilen Tutar=%d\nKalan Bakiyeniz:%d",Para_Cekme,bakiye);
	   	   
	
	}
	 else if (secim==2){
		int Para_Yatirma;
		printf("Yatirmak Istediginiz Parayi Belirtilen Bölmeye Koyup Miktarýný da Yaziniz= ");
		scanf("%d",&Para_Yatirma);
		bakiye=bakiye+Para_Yatirma;
		
		printf("Yeni Bakiyeniz:%d",bakiye);
		
	}
	 else if (secim==3){
		int Kredi_Karti_Borcu_Odeme;
		printf("Kredi Kartinizin Borcunu Giriniz= ");
		scanf("%d",&Kredi_Karti_Borcu_Odeme);
		bakiye=bakiye-Kredi_Karti_Borcu_Odeme;
		
		printf("Yeni Bakiyeniz=%d",bakiye);
	
		
}
     else if (secim==4){
      char Fatura_Adi[10];
      int Fatura_Tutari;
      printf("Odemek Istediginiz Faturanin Adini Yaziniz= ");
      scanf("%c",&Fatura_Adi);
      printf("\nFaturanin Tutarini Giriniz= ");
      scanf("%d",&Fatura_Tutari);
      bakiye= bakiye-Fatura_Tutari;
      printf("Yeni Bakiyeniz:%d",bakiye);
     
	}
	 else if (secim==5){
		printf("Programdan Cikis Yapiyorsunuz...");
		printf("\nProgram Sonlandirildi.");
		break;
		
	}
	   		

}
    else {
      printf("\nSifreniz Yanlýþ");
	}
}

else{

	printf("Girdiginiz Bilgiler Yanlis Lutfen Tekrar Deneyiniz...");
	i+=1;
}
int sec;
printf("Bu Programa Devam Etmek Ýstiyorsaniz'1' basiniz= ");
scanf("%d",&sec);
if (sec==1){
	printf("Programa Devam Ediyorsunuz...");
	
}
else{
		printf("Programdan Cikis Yapiyorsunuz...");
		printf("\nProgram Sonlandirildi.");
		break;
	}
}
return 0;
}

