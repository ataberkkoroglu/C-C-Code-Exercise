#include <stdio.h> 

int main(){

// dairenin �evresi ve  alan� Hesaplama

float pi=3.14;
float yaricap;
printf("Dairenin Yaricapini Giriniz=");
scanf("%f",&yaricap);
float cevre=2*pi*yaricap;
printf("Dairenin Cevresi=%f",cevre);
float alan=pi*yaricap*yaricap;
printf("\nDairenin Alan�=%f",alan);

return 0;

}
