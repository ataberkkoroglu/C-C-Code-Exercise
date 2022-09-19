#include <stdio.h>
#include<locale.h>

main(){
	setlocale(LC_ALL,"Turkish");
	float r;
	#define pi 3.14
	float alan;
	float hacim;
	printf("Kürenin Alaný ve Hacmini Bulma Programýna Hoþgeldiniz...\n");
	printf("Kürenin Yarýçapýný Metre Cinsinden Giriniz= ");
	scanf("%f",&r);
	alan=4*pi*r*r;
	hacim=4*pi*r*r*r/3;
	printf("Yarýçapýnýn Deðerini Girdiðiniz Kürenin Alaný:%f ve Hacmi:%f Þudur ",alan,hacim);
	return 0;
}
