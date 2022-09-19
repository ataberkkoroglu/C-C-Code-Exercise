#include<iostream>
using namespace std;
void hesapla(int a, int b){
	int alan,cevre;
	alan=a*b;
	cevre=2*(a+b);
	cout<<"\nDikdörtgenin Çevresi "<<cevre<<" Cm'dir."<<endl<<"Dikdörtgenin Alaný "<<alan<<" SantimetreKaredir.";
}
int main(){
	setlocale(LC_ALL,"Turkish");
	cout<<"Dikdörtgenin Çevre ve Alaný Bulan C Programýna Hoþgeldiniz...\n";
	int u,k;
	cout<<"Dikdörtgenin Uzun Kenarýný Cm Cinsinden Giriniz: ";
	cin>>u;
	cout<<"\nDikdörtgenin Kýsa Kenarýný Cm Cinsinden Giriniz: ";
	cin>>k;
	hesapla(u,k);
	
return 0;	
}
