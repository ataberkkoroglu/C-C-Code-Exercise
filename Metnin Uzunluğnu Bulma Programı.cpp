#include<stdio.h>
#include<string.h>
#include<locale.h>

int main(void){

 setlocale(LC_ALL,"Turkish");
 char metin[3000];
 printf("Girilen Metnin Uzunluðunu Bulan Programa Hoþgeldiniz...\n");
 printf("Yazmak Ýstediginiz Metni Yazýnýz: ");
 gets(metin);
 printf("\n%d",strlen(metin));
 
}
