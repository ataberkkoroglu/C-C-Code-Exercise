#include <stdio.h>
#include <locale.h>
int main(){
setlocale(LC_ALL,"Turkish");

int *pointer;
int sayi;
printf("Sayýyý Giriniz: ");
scanf("%d",&sayi);
printf("\nSayi1'nin Adresi:%p",&sayi);
pointer=&sayi;
int sayi3=*pointer+5;
pointer=pointer+1;

printf("\nSayi:%d\nSayinin Adresi: %x",sayi3,pointer);

//printf("%x",pointer);

return 0;
}
