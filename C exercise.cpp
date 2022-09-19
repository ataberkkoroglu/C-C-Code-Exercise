#include <stdio.h> 

int main(){

// dairenin çevresi ve  alaný Hesaplama

float pi=3.14;
float yaricap;
printf("Dairenin Yaricapini Giriniz=");
scanf("%f",&yaricap);
float cevre=2*pi*yaricap;
printf("Dairenin Cevresi=%f",cevre);
float alan=pi*yaricap*yaricap;
printf("\nDairenin Alaný=%f",alan);

return 0;

}
