#include<stdio.h>
#include<locale.h>
main(){
 const float pi=3.14;
 setlocale(LC_ALL,"Turkish");
 double Grad,Radyan;
 float d;
 printf("Derece Cinsinden Bir A�� Giriniz= ");
 scanf("%f",&d);
 Grad=d*pi/200;
Radyan=d*pi/180;
printf("Derecenin Grad Cinsinden De�eri:%f",Grad);
printf("\nDercenin Radyan Cinsinden De�eri:%f",Radyan);

}
