#include<iostream>
using namespace std;

main(){
	setlocale(LC_ALL,"Turkish");
	cout<<"Programa Ho�geldiniz...\n";
	int sayi[5],toplam=0;
	for(int i=0;i<5;i++){
		cout<<i+1<<". "<<"Say�y� Giriniz: ";
		cin>>sayi[i];
		toplam +=sayi[i];
	}
cout<<"Girdiginiz Be� Say�n�n Toplam�: "<<toplam;
}
