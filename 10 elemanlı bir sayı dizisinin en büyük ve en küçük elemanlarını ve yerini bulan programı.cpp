#include<stdio.h>
#include<locale.h>
int fonksiyon(int *sayi,int b){
 int temp;
 for(int i=0;i<10;i++){
 	if(sayi[i]>sayi[i+1]){
 		temp=sayi[i];
 		sayi[i]=sayi[i+1];
 		sayi[i+1]=temp;
}
}
}
main(){
 setlocale(LC_ALL,"Turkish");
 int sayi[10],toplam=0;
 printf("Programa Ho�geldiniz...\n");
 for(int i=0;i<10;i++){
    printf("\n%d. Say�y� Giriniz: ",i+1);
    scanf("%d",&sayi[i]);  
    toplam +=sayi[i];
}
for (int e=0;e<10;e++){
fonksiyon(sayi,10);
}

printf("\nDizinin En B�y�k Eleman�: %d , En K���k Eleman�: %d",sayi[9],sayi[0]);
}
