#include<stdio.h>
#include<locale.h>

main(){
 setlocale(LC_ALL,"Turkish");
 printf("1'den 1000'e kadar Yazd�ran Programa Ho�geldiniz...\n");
 for(int i=1;i<1000;i++){
 	printf("%d\n",i);
 }
}
