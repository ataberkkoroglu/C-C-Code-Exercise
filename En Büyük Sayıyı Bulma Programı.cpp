#include <iostream>
using namespace std;
main(){
setlocale(LC_ALL,"Turkish");
cout<<"En B�y�k Say�y� Bulma Program�na Ho�geldiniz..."<<endl;
int sayi1,sayi2,sayi3;
int i=0;

while (i<3){
	int sec;
	cout<<"Devam Etmek ��in '1' i Devam Etmemek ��in '0' a Bas�n�z= ";
	cin>>sec;
    if (sec==1){
	
	cout<<"Say�y� Giriniz= ";
	cin>>sayi1;
	i++;
	cout<<"Say�y� Giriniz= ";
	cin>>sayi2;
	i++;
	cout<<"Say�y� Giriniz= ";
	cin>>sayi3;
	i++;

	
	if (i==3){
	  if (sayi3>sayi2&& sayi2>sayi1){
	    printf("%d>%d>%d 'den/dan B�y�kt�r ",sayi3,sayi2,sayi1);
	}
	  else if(sayi3==sayi2==sayi1){
	   	printf("%d=%d=%d",sayi3,sayi2,sayi1);
	  }
	  else if(sayi2>sayi3 && sayi3>sayi1) {
	  	printf("%d > %d > %d 'den/dan B�y�kt�r.",sayi2,sayi3,sayi1);	
	  }
	  else if (sayi1>sayi3&& sayi3>sayi2){
	  	 printf("%d > %d > %d 'den/dan B�y�kt�r.",sayi1,sayi3,sayi2);
	  }
	 else if(sayi2>sayi3 && sayi3<sayi1) {
	  	printf("%d > %d > %d 'den/dan B�y�kt�r.",sayi2,sayi1,sayi3);
	   }
	   else if (sayi3<sayi2&& sayi2<sayi1){
	    printf("%d>%d>%d ",sayi1,sayi2,sayi3);
	}
}
}
  else if (sec==0){
        
       
	    
	    printf("Program Sonland�r�l�yor...");
        printf("\nYine Bekleriz...");
        break;
		
	
}

}
}

