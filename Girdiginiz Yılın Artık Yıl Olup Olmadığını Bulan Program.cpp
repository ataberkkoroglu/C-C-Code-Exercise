#include<stdio.h>
#include<locale.h>

main(){
	setlocale(LC_ALL,"Turkish");
	printf("Girdiginiz Yýlýn Artýk Yýl Olup Olmadýðýný Bulan Programa Hoþgeldiniz...\n");
	int yil;
	printf("Girmek Ýstediðiniz Yýlý Giriniz: ");
	scanf("%d",&yil);
	if (yil%4==0){
		printf("%d Yýlý Artýk Bir Yýldýr.",yil);
	}
	else{
		printf("%d Yýlý Artýk Bir Yýl Deðildir.",yil);
	}
}
