#include<stdio.h>
#include<locale.h>
#include<conio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
int main(void){
	setlocale(LC_ALL,"Turkish");
	printf("Uygulamaya Ho�geldiniz...");
	FILE *fp;
	int sayac=0;
	char cumle[300],kr;
	fp=fopen("Cumle.txt","r+");
	if (fp=='\0'){
		fp=fopen("Cumle.txt","w+");
	}
	printf("\nYazmak �stedi�iniz C�mleyi Yaz�n�z: ");
	gets(cumle);
	for (int i=0;i<strlen(cumle);i++){
		putc(cumle[i],fp);
	}
	fclose(fp);
	fopen("Cumle.txt","r");
	if (fp=='\0'){
		printf("\nDosya Bulunamad�...\a");
	}
	else{
	while((kr=getc(fp))!=EOF){
		   
			if (kr>47 && kr<58){
				sayac++;
			}
		}
	if(sayac !=0){
		printf("\nYaz�lan C�mlede %d Rakam Bulunur.",sayac);
		
	}
	else{
		printf(" Yaz�lan C�mlede Rakam Bulunmamaktad�r.");
	}
	}
}
