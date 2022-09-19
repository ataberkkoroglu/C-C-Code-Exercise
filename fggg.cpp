#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<unistd.h>
using namespace std;

int main(void){
	setlocale(LC_ALL,"Turkish");
	cout<<"Programa Hoþgeldiniz...";
	int sayi[2];
	int *ptr[2];
	cout<<endl<<"1.Sayýyý Giriniz: ";
	cin>>sayi[0];
	cout<<endl<<"2.Sayýyý Giriniz: ";
	cin>>sayi[1];
	ptr[0]=&sayi[0];
	ptr[1]=&sayi[1];
	cout<<endl<<(*ptr[0]+1)<<'\t'<<(*ptr[1]-1);
}
