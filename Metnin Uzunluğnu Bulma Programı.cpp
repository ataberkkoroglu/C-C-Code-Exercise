#include<stdio.h>
#include<string.h>
#include<locale.h>

int main(void){

 setlocale(LC_ALL,"Turkish");
 char metin[3000];
 printf("Girilen Metnin Uzunlu�unu Bulan Programa Ho�geldiniz...\n");
 printf("Yazmak �stediginiz Metni Yaz�n�z: ");
 gets(metin);
 printf("\n%d",strlen(metin));
 
}
