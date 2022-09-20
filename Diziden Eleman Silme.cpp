#include<iostream>
#include<unistd.h>
#include<stdlib.h>
#include<conio.h>

using namespace std;

int main(void){
	setlocale(LC_ALL,"Turkish");
	cout<<"Programa Hoþgeldiniz...\n";
    int sayi[]={10,25,32,41,53,67};
    int ter,silindi=0;
    int boyut=sizeof(sayi)/4;
    for (int i=0;i<sizeof(sayi)/4;i++){
    	cout<<sayi[i]<<' ';
	}
	cout<<endl<<"Hangi Sayýyý Silmek Ýstiyorsunuz: ";
	cin>>ter;
	for (int e=0;e<boyut;e++){
		if(sayi[e]==ter){
			for(int i=e;i<boyut-1;i++)
				sayi[i]=sayi[i+1];
			silindi=1;
			e--;
			boyut--;
			}
			
		}
  if(silindi == 0)
        printf("Eleman listede bulunamadi.");
    else
        printf("Eleman listeden silindi");
        
        
    //diziyi ekrana yazdýrýyoruz
    printf("\nDizinin son hali : ");
    
    for(int i=0 ; i<boyut ; i++)
    	printf("%d ",sayi[i]);
	}
	
