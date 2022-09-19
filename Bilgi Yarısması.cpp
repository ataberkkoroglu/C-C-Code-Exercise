#include <stdio.h>

#include<string.h>

void bilgi_yarismasi(){

int sec;

int sec2;

int a=12;

int b=11;

char isim[20],soyisim[10];

while (a>10){

a--;
printf("\nBilgi Yarismasina Hos Geldiniz....");

printf("\nYarismaya Devam Etmek icin'1' Etmemek icin'0' Giriniz= ");

scanf("%d",&sec);

if (sec==1){

printf("\nIki Isminiz Varsa Arasýna 1 Tire Birakarak Yaziniz.");

printf("\nIsminizi Giriniz= ");

scanf("%s",&isim);

printf("\nSoyadinizi Giriniz= ");

scanf("%s",&soyisim);

break;
	
}
else if(sec==0){
		
	printf("\nEmin Misiniz?[Evet==1/ Hayir==2]= ");
	
	scanf("%d",&sec2);
	
    if (sec2==1){
    	
    	printf("Yarismadan Cikiyorsunuz...");
        break;
        
    	
    }
    else if(sec2==2){
    	printf("Yarisma Programina Devam Ediyorsunuz...");
    	
    	b--;
    
    	
	}
	else{
		printf("Yanlýs Deger Girdiniz...");
	}
			
}


 else {
	printf("Yanlis Deger Girdiniz...");

}

}


 int c=0;
 int sec3;
 while (c<3){
 
 	
 printf("\nPrograma Devam Etmek Istiyorsanýz'1' Istemiyorsanýz '0'  Giriniz= ");
 scanf("%d",&sec3);
 if(sec3==0){
 	printf("Yarismadan Cikiyorsunuz...");
 	 break;
}
  else if(sec3==1){

int cevap;

printf("\nFatih Sultan Mehmet Kac Yilinda Istanbulu Fetih Etmistir= ");

scanf("%d",&cevap);

if (cevap==1453){
	
  printf("\nTebrikler,dogru Bildiniz...");
  
  printf("\nMustafa Kemal Ataturk Kac Yilinda Dogmustur= ");
  
  scanf("%d",&cevap);
  
  if (cevap==1881){
  	
   printf("\nTebrikler,dogru Bildiniz...");
   
     printf("\nTurkiye Cumhuriyeti Ne Zaman Kurulmustur= ");	
     
     scanf("%d",&cevap);
     
     if (cevap==1923){
     	
       printf("\nTebrikler,dogru Bildiniz...");
       
        printf("\n%s %s %d yanlis ile Yarismayi Bitirdi. ",isim,soyisim,c);
         break;
       
}
     else{
     	
	   printf("\nCevabiniz Yanlis...Cevap=1923'di");
	   
	   c++;
	   
      printf("\n%s %s %d yanlis ile Yarismayi Bitirdi. ",isim,soyisim,c);
       break;
     
       }
}
    else {
     printf("\nCevabiniz Yanlis...Cevap=1881'di");
	 c++;

     printf("\nTurkiye Cumhuriyeti Ne Zaman Kurulmustur= ");
	 	
     scanf("%d",&cevap);
     
      if (cevap==1923){
     	
       printf("\nTebrikler,dogru Bildiniz...");
       
         printf("\n%s %s %d yanlis ile Yarismayi Bitirdi. ",isim,soyisim,c);
          break;
        
}
      else{
	   printf("\nCevabiniz Yanlis...Cevap=1923'di");
	   
	   c++;
	   
       printf("\n%s %s %d yanlis ile Yarismayi Bitirdi. ",isim,soyisim,c);
       
        break;
	}
}
 

}
else{
	printf("\nCevabiniz Yanlis...Cevap=1453'di");
	 
	
	c++;
	
	printf("\nMustafa Kemal Ataturk Kac Yilinda Dogmustur= ");
	
  scanf("%d",&cevap);
  
  if (cevap==1881){
  	
   printf("\nTebrikler,dogru Bildiniz...");
   
     printf("\nTurkiye Cumhuriyeti Ne Zaman Kurulmustur= ");
	 	
     scanf("%d",&cevap);
     
     if (cevap==1923){
     	
       printf("\nTebrikler,dogru Bildiniz...");
       
       printf("\n%s %s %d yanlis ile Yarismayi Bitirdi. ",isim,soyisim,c);
       
}
     else{
	   printf("\nCevabiniz Yanlis...Cevap=1923'di.");
	   
	   c++;
	   
       printf("\n%s %s %d yanlis ile Yarismayi Bitirdi. ",isim,soyisim,c);
       break;
       
   }
}
    else {
    	printf("\nCevabiniz Yanlis...Cevap=1881'di");
	    c++;
		 printf("\nTurkiye Cumhuriyeti Ne Zaman Kurulmustur= ");
	 	
     scanf("%d",&cevap);
     
     if (cevap==1923){
     	
       printf("\nTebrikler,dogru Bildiniz...");
       
       printf("\n%s %s %d yanlis ile Yarismayi Bitirdi. ",isim,soyisim,c);
        break;
       
}
     else{
	   printf("\nCevabiniz Yanlis...Cevap=1923'di.");
	   
	   c++;
	   
       printf("\n%s %s %d yanlis ile Yarismayi Bitirdi. ",isim,soyisim,c);
        break;
       
	}

}

}
}
else {
	printf("Yanlýs Girdiniz...");
}
}
}





int main(){
	
bilgi_yarismasi();

return 0;

}

