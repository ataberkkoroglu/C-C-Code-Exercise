#include<iostream>
using namespace std;

int main(){
	setlocale(LC_ALL,"Turkish");
	int n,i;
	cout<<"Programa Ho�geldiniz\n";
	cout<<"Programa Ka� tane Say� Yazd�rmak �stiyorsunuz: ";
	cin>> n;
	int sayi[n];
	for(int i=0;i<n;i++){
		
		cout<<i+1<<". "<<"Say�y� Giriniz: ";
		cin>>sayi[i];
	}
	for(int e=0;e<n;e++)
	   cout<<e+1<<". "<<"Say�: "<<sayi[e]<<endl;
	
	
	
	return 0;
}
