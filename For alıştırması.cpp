#include <stdio.h>

int main(){
printf("Asal Sayi Bulma Programina Hosgeldiniz...");
int sayi;

int i=1;
printf("\nBir Sayi Giriniz= ");
scanf("%d",&sayi);
if(sayi==2){
	printf("\nGirdiginiz Sayi %d Asal Sayidir.",sayi);
}
else if(sayi<2){
	printf("\nGirdiginiz Sayi %d Asal Sayi Degildir.",sayi);
}
else if(sayi>2){

while (i<sayi){
	i ++;
	if(sayi%i==0){
		if(i!=sayi){
		 printf("\nBu Sayi %d Asal Sayi Degildir.",sayi);
		}
		if(i==sayi){
		 printf("\nBu Sayi %d Asal Sayidir.",sayi);
		break;
		}
   
	
	else {
	    printf("\nDevam Ediliyor...");
	    
        
			 
		}
}
 

	
}
		
return 0;
		
}
}

	
	


