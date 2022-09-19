#include<iostream>
using namespace std;

main(){
	setlocale(LC_ALL,"Turkish");
	cout<<"Klavyeden girilen 20 adet sayýdan çift sayýlarýn toplamýnýn tek sayýlarýn toplamýna oranýný bulan programa Hoþgeldiniz... ";
	int sayi[20],cift_toplami=0,tek_toplami=0;
	for (int i=0;i<20;i++){
		cout<<endl<<"Girmek Ýstediginiz "<<i+1<<". "<<"Sayýyý Giriniz= ";
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
	cout<<"çift sayýlarýn toplamýnýn tek sayýlarýn toplamýna oraný: "<<oran<<endl;

}
