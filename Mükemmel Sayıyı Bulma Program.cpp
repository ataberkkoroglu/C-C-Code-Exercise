#include <iostream>
using namespace std;

main(){
	setlocale(LC_ALL,"Turkish");
	cout<<"Mükemmel Sayýyý Bulma Programýna Hoþgeldiniz...";
	int x,toplam=0;
	
	cout<<endl<<"Girmek Ýstediðiniz Sayýyý Giriniz= ";
	cin>> x;
	for (int i=1;i<=x/2;i++){
		if (x%i==0){
		
		toplam=toplam+i;
	}
}
        if(x==toplam){
		  cout<<x<<" Sayýsý Bir Mükemmel Sayýdýr.";
	}
		else {
			cout <<x<<" Sayýsý Mükemmel Sayý Deðildir.";
		}
}


