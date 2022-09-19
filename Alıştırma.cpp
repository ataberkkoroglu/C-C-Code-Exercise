#include <stdio.h>


int main()	{
int c=0;
int a=0 ;
while (c<=1000){
c=c+1;

while (a<=1000){

a=a+1;
int sayi;
 printf("\nBir Dogal Sayi Giriniz= ");
 scanf("%d",&sayi);
  if (sayi<0) 
 {
  printf("\nYanlis Deger Girdiniz...");
  break;
}
else {
 if (sayi%2==0) {
 
  printf("\n%d Sayisi Ciftir.",sayi);
  break;
}
 else if (sayi%2!=0) {
  printf("\n%d Sayisi Tektir.",sayi);
  break;
}
}
}
int b=0;
while (b<=1000){
b=b+1;
int y;
printf("\nDevam Etmek icin '0' Devam Etmemek icin'1'' Giriniz= ");
scanf("%d",&y);
if (y==0){
  printf("\nDevam Ediliyor...");
  break;
}
else if (y==1){
	printf("\nProgram Sonlandiriliyor");
	printf("\nProgram Sonlandirildi");
	c=1001;
	break;
	
	
	
}
else {
	printf("Yanlis Girdiniz...");
}
}
}
}



