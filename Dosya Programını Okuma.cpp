#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<conio.h>

struct kayit{
	char isaretci;
	char ad[10];
	char soyad[10];
	char numara[11];

};
int main(void){
	setlocale(LC_ALL,"Turkish");
	struct kayit rehber;
	int KayitUzunluk,KayitPozisyonu,n;
	char sec;
	FILE *fp;
	printf("Programa Hoþgeldiniz...\n");
	fp=fopen("Rehber.txt","r");
	if(fp=='\0'){
		printf("\nDosya Bulunamadý...");
	}
	KayitUzunluk=sizeof(rehber);
	while(1){
	printf("Devam Etmek Ýstiyor Musunuz?\n");
	printf("E/H: ");
	sec=getche();
	if(sec=='E'||sec=='e'){
		printf("\nHangi Kayýdý Okumak Ýstiyorsunuz: ");
	    scanf("%d",&n);
	    KayitPozisyonu=(n-1)*KayitUzunluk;
	    fseek(fp,KayitPozisyonu,SEEK_SET);
	    fread(&rehber,KayitPozisyonu,1,fp);
	    if(rehber.isaretci=='\0'){
	    	printf("Kayýt Boþ...");
		}
		else{
			printf("%c %s %s %s\n",rehber.isaretci,rehber.ad,rehber.soyad,rehber.numara);
		}
}
	else if (sec=='H'||sec=='h'){
		printf("\nYine Bekleriz...");
		break;
	}
	    
}
}

