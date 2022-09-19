#include <iostream>
using namespace std;
main(){
setlocale(LC_ALL,"Turkish");
cout<<"En Büyük Sayýyý Bulma Programýna Hoþgeldiniz..."<<endl;
int sayi1,sayi2,sayi3;
int i=0;

while (i<3){
	int sec;
	cout<<"Devam Etmek Ýçin '1' i Devam Etmemek Ýçin '0' a Basýnýz= ";
	cin>>sec;
    if (sec==1){
	
	cout<<"Sayýyý Giriniz= ";
	cin>>sayi1;
	i++;
	cout<<"Sayýyý Giriniz= ";
	cin>>sayi2;
	i++;
	cout<<"Sayýyý Giriniz= ";
	cin>>sayi3;
	i++;

	
	if (i==3){
	  if (sayi3>sayi2&& sayi2>sayi1){
	    printf("%d>%d>%d 'den/dan Büyüktür ",sayi3,sayi2,sayi1);
	}
	  else if(sayi3==sayi2==sayi1){
	   	printf("%d=%d=%d",sayi3,sayi2,sayi1);
	  }
	  else if(sayi2>sayi3 && sayi3>sayi1) {
	  	printf("%d > %d > %d 'den/dan Büyüktür.",sayi2,sayi3,sayi1);	
	  }
	  else if (sayi1>sayi3&& sayi3>sayi2){
	  	 printf("%d > %d > %d 'den/dan Büyüktür.",sayi1,sayi3,sayi2);
	  }
	 else if(sayi2>sayi3 && sayi3<sayi1) {
	  	printf("%d > %d > %d 'den/dan Büyüktür.",sayi2,sayi1,sayi3);
	   }
	   else if (sayi3<sayi2&& sayi2<sayi1){
	    printf("%d>%d>%d ",sayi1,sayi2,sayi3);
	}
}
}
  else if (sec==0){
        
       
	    
	    printf("Program Sonlandýrýlýyor...");
        printf("\nYine Bekleriz...");
        break;
		
	
}

}
}

