#include<stdio.h>
#include<locale.h>
main(){
 const float pi=3.14;
 setlocale(LC_ALL,"Turkish");
 double Grad,Radyan;
 float d;
 printf("Derece Cinsinden Bir Açý Giriniz= ");
 scanf("%f",&d);
 Grad=d*pi/200;
Radyan=d*pi/180;
printf("Derecenin Grad Cinsinden Deðeri:%f",Grad);
printf("\nDercenin Radyan Cinsinden Deðeri:%f",Radyan);

}
