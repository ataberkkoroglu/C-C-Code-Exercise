#include <stdio.h>
#include<locale.h>

main(){
	setlocale(LC_ALL,"Turkish");
	float r;
	#define pi 3.14
	float alan;
	float hacim;
	printf("K�renin Alan� ve Hacmini Bulma Program�na Ho�geldiniz...\n");
	printf("K�renin Yar��ap�n� Metre Cinsinden Giriniz= ");
	scanf("%f",&r);
	alan=4*pi*r*r;
	hacim=4*pi*r*r*r/3;
	printf("Yar��ap�n�n De�erini Girdi�iniz K�renin Alan�:%f ve Hacmi:%f �udur ",alan,hacim);
	return 0;
}
