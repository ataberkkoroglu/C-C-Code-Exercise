#include<iostream>
using namespace std;

int main(){
	setlocale(LC_ALL,"Turkish");
	int n,i;
	cout<<"Programa Hoþgeldiniz\n";
	cout<<"Programa Kaç tane Sayý Yazdýrmak Ýstiyorsunuz: ";
	cin>> n;
	int sayi[n];
	for(int i=0;i<n;i++){
		
		cout<<i+1<<". "<<"Sayýyý Giriniz: ";
		cin>>sayi[i];
	}
	for(int e=0;e<n;e++)
	   cout<<e+1<<". "<<"Sayý: "<<sayi[e]<<endl;
	
	
	
	return 0;
}
