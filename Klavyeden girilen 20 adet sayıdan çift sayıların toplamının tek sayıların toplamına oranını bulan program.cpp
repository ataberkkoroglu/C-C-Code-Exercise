#include<iostream>
using namespace std;

main(){
	setlocale(LC_ALL,"Turkish");
	cout<<"Klavyeden girilen 20 adet say�dan �ift say�lar�n toplam�n�n tek say�lar�n toplam�na oran�n� bulan programa Ho�geldiniz... ";
	int sayi[20],cift_toplami=0,tek_toplami=0;
	for (int i=0;i<20;i++){
		cout<<endl<<"Girmek �stediginiz "<<i+1<<". "<<"Say�y� Giriniz= ";
		cin>>sayi[i];
		if (sayi[i]%2==0){
			cift_toplami=cift_toplami+sayi[i];
		}
		else {
			tek_toplami=tek_toplami+sayi[i];
		}	
	}
	double oran;
	oran=double(cift_toplami)/tek_toplami;
	cout<<"�ift say�lar�n toplam�n�n tek say�lar�n toplam�na oran�: "<<oran<<endl;

}
