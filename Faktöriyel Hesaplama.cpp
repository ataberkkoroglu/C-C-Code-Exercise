#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL,"Turkish");
	cout<<"Girilen Sayýnýn Faktöriyelini Bulma Programýna Hoþgeldiniz...";
	int sayi ,faktoriyel=1;
	cout<<endl<<"Sayýyý Giriniz: ";
	cin>>sayi;
	for (int i=2;i<=sayi;i++){
		faktoriyel *=i;
	}
	cout<<endl<<sayi<<" Faktöriyel Þuna Eþittir: "<<faktoriyel;
	return 0;
}
