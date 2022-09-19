#include<stdio.h>
#include<locale.h>
#include<conio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
int main(void){
	setlocale(LC_ALL,"Turkish");
	printf("Uygulamaya Hoþgeldiniz...");
	FILE *fp;
	int sayac=0;
	char cumle[300],kr;
	fp=fopen("Cumle.txt","r+");
	if (fp=='\0'){
		fp=fopen("Cumle.txt","w+");
	}
	printf("\nYazmak Ýstediðiniz Cümleyi Yazýnýz: ");
	gets(cumle);
	for (int i=0;i<strlen(cumle);i++){
		putc(cumle[i],fp);
	}
	fclose(fp);
	fopen("Cumle.txt","r");
	if (fp=='\0'){
		printf("\nDosya Bulunamadý...\a");
	}
	else{
	while((kr=getc(fp))!=EOF){
		   
			if (kr>47 && kr<58){
				sayac++;
			}
		}
	if(sayac !=0){
		printf("\nYazýlan Cümlede %d Rakam Bulunur.",sayac);
		
	}
	else{
		printf(" Yazýlan Cümlede Rakam Bulunmamaktadýr.");
	}
	}
}
