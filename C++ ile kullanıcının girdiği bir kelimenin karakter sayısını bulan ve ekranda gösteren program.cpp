#include<stdio.h>
#include<locale.h>
#include<string.h>

int main(){
setlocale(LC_ALL,"Turkish");
int i=0;
printf("Programa Ho�geldiniz...\n");
char metin[3000];
printf("Metinizi Yaz�n�z: ");
gets(metin);
printf(metin);
char *ptr=metin;
while (metin[i]!='\0'){
	i++;
}
printf("\nMetnin Uzunlu�u:%d",i);

return 0;
}

