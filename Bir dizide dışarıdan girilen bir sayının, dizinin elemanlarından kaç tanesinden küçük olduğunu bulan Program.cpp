#include <iostream>
using namespace std;

main(){
	setlocale(LC_ALL,"Turkish");
	int sayi[]={23,12,34,58,69};
	int n,k=0;
    cout<<"Programa Hoþgeldiniz...\n";
    cout<<"Girmek Ýstediðiniz Sayýyý Giriniz: ";
    cin>>n;
    for(int i=0;i<5;i++){
    	if(sayi[i]>n){
    		k++;
		}
	}
cout <<"\nGirdiginiz Sayý Dizinin "<<k<<" Elemanýndan Küçüktür.";
}
