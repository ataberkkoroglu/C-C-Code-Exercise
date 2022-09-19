#include<iostream>
using namespace std;

main(){
	setlocale(LC_ALL,"Turkish");
	cout<<"Programa Hoþgeldiniz...\n";
	int sayi[5],toplam=0;
	for(int i=0;i<5;i++){
		cout<<i+1<<". "<<"Sayýyý Giriniz: ";
		cin>>sayi[i];
		toplam +=sayi[i];
	}
cout<<"Girdiginiz Beþ Sayýnýn Toplamý: "<<toplam;
}
