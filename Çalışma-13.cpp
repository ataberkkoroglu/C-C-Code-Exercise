#include<iostream>
#include<string.h>
using namespace std;
void Ataberk(int a,int b){
	int toplam;
	toplam=a+b;
	cout<<endl<<toplam;
}
int main(void){
	void Badem(string metin);
	setlocale(LC_ALL,"Turkish");
	cout<<"Programa Ho�geldiniz...";
	int a,b;
	cout<<"Say�lar� Giriniz: ";
	cin>>a>>b;
	string *ptr;
	string Metin;
	cout<<"\nBir Metin Yaz�n�z: ";
	getline(cin,Metin);
	ptr=&Metin;
	cout<<endl<<*ptr;
	Badem(Metin);
	Ataberk(a,b);
}
void Badem(string metin){
	cout<<endl<<metin<<" Bademin Abisidir.";
}
