#include <stdio.h>
#include<locale.h>

int main(){
 setlocale(LC_ALL,"Turkish");
 printf("Girilen 2 Say�n�n Aras�ndaki Asal Say�lar� Bulma Program�na Ho�geldiniz...\n");
 int a,b;
 printf("�lk Say�y� Giriniz: ");
 scanf("%d",&a);
 printf("�kinci Say�y� Giriniz: ");
 scanf("%d",&b);
 if(a>b && a>1 &&b>1){
 	for (b;b<=a;b++){
 		for(int e=3;e<a;e++){
 			if(b>e){
 			 if(b%e==0){
 				   printf("%d Say�s� Asal Say� De�ildir.\n",b);
 				   break;
			}
			 if((e+1)==b){
             	printf("%d Say�s� Asald�r.\n",b);
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
			 	  printf("%d Say�s� Asald�r.\n",a);
			 	  break;
			 }
			 	else {
 				  printf("%d Say�s� Asal Say� De�ildir.\n",a);
 				  break;
 			 
			 }
		}
			 
			 }
		 }
	 
	 }
 }

else {
  printf("\nSay�lar E�it veya 2'den K���k Bu Y�zden Asal Say� Bulunmamaktad�r.");
}	
		
return 0;
}
