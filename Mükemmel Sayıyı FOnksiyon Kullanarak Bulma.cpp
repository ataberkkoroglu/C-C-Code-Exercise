#include<iostream>
#include<stdlib.h>
using namespace std;

int main(void){
	setlocale(LC_ALL,"Turkish");
	cout<<"Programa Hoþgeldiniz...";
	int sayi;
	cout<<"\nSayýyý Giriniz: ";
	cin>>sayi;
	if (sayi<0){
		sayi=abs(sayi);
	}
	void x(int a);
	x(sayi);
}

void x(int a){
	int toplam=0;
	for(int i=1;i<=a/2;i++){
	if(a%i==0){
      toplam +=i;
      if(a==toplam){
       cout<<endl<<a<<" Sayýsý Mükemmel Sayýdýr.";
       break;
   }
}
}
}
