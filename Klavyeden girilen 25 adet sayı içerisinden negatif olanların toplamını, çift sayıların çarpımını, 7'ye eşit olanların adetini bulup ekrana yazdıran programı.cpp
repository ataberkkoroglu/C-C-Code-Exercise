#include<stdio.h>
#include<locale.h>

main(){
	setlocale(LC_ALL,"Turkish");
	printf("Programa Hoþgeldiniz...\n");
	int cift_carpimi,negatif_toplami,i,sayi,e;
	cift_carpimi=1;
	negatif_toplami=0;
	e=0;
	for(i=1;i<=25;i++){
		printf("%d. Girmek Ýstediðiniz Sayýyý Giriniz: ",i);
		scanf("%d",&sayi);
		if(sayi%2==0&&sayi>=0){
			cift_carpimi *=sayi;
		    printf("%d\n",cift_carpimi);
	}
		else if(sayi<0){
			negatif_toplami +=sayi;
			printf("%d\n",negatif_toplami);
		}
		if(negatif_toplami==7){
			e++;
		}
		if(cift_carpimi==7){
			e++;
		}
		
		
	}
printf("7'ye Eþit Olanlarýn Adedi: %d",e);

}
