#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL,"Turkish");
	cout<<"Girilen Say�n�n Fakt�riyelini Bulma Program�na Ho�geldiniz...";
	int sayi ,faktoriyel=1;
	cout<<endl<<"Say�y� Giriniz: ";
	cin>>sayi;
	for (int i=2;i<=sayi;i++){
		faktoriyel *=i;
	}
	cout<<endl<<sayi<<" Fakt�riyel �una E�ittir: "<<faktoriyel;
	return 0;
}
