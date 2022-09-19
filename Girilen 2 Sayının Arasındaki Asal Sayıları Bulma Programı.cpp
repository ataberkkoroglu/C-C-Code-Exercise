#include <stdio.h>
#include<locale.h>

int main(){
 setlocale(LC_ALL,"Turkish");
 printf("Girilen 2 Sayýnýn Arasýndaki Asal Sayýlarý Bulma Programýna Hoþgeldiniz...\n");
 int a,b;
 printf("Ýlk Sayýyý Giriniz: ");
 scanf("%d",&a);
 printf("Ýkinci Sayýyý Giriniz: ");
 scanf("%d",&b);
 if(a>b && a>1 &&b>1){
 	for (b;b<=a;b++){
 		for(int e=3;e<a;e++){
 			if(b>e){
 			 if(b%e==0){
 				   printf("%d Sayýsý Asal Sayý Deðildir.\n",b);
 				   break;
			}
			 if((e+1)==b){
             	printf("%d Sayýsý Asaldýr.\n",b);
             	break;
             }
		 }
	 }
 }
}
 else if(b>a && a>1 && b>1){
 		for (a;a<=b;a++){
 		  for(int e=3;e<b;e++){
 			if(a>e){
 			 if(a%e==0){
 			 	if((e+1)==a){
			 	  printf("%d Sayýsý Asaldýr.\n",a);
			 	  break;
			 }
			 	else {
 				  printf("%d Sayýsý Asal Sayý Deðildir.\n",a);
 				  break;
 			 
			 }
		}
			 
			 }
		 }
	 
	 }
 }

else {
  printf("\nSayýlar Eþit veya 2'den Küçük Bu Yüzden Asal Sayý Bulunmamaktadýr.");
}	
		
return 0;
}
