#include<iostream>
using namespace std;
void hesapla(int a, int b){
	int alan,cevre;
	alan=a*b;
	cevre=2*(a+b);
	cout<<"\nDikd�rtgenin �evresi "<<cevre<<" Cm'dir."<<endl<<"Dikd�rtgenin Alan� "<<alan<<" SantimetreKaredir.";
}
int main(){
	setlocale(LC_ALL,"Turkish");
	cout<<"Dikd�rtgenin �evre ve Alan� Bulan C Program�na Ho�geldiniz...\n";
	int u,k;
	cout<<"Dikd�rtgenin Uzun Kenar�n� Cm Cinsinden Giriniz: ";
	cin>>u;
	cout<<"\nDikd�rtgenin K�sa Kenar�n� Cm Cinsinden Giriniz: ";
	cin>>k;
	hesapla(u,k);
	
return 0;	
}
