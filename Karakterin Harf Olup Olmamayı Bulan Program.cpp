#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<unistd.h>
using namespace std;

int main(void){
	setlocale(LC_ALL,"Turkish");
	cout<<"Programa Ho�geldiniz...";
	char x,sec;
	while(1){
	cout<<endl<<"Klavyenizden Herhangi Bir Tu�a Bas�n�z: ";
	cin>>x;
	if (x>=0 && x<=64 || x>90 && x<96 ||x>122 && x<128){
		cout<<endl<<x<<" Harf De�ildir.";
	}
	else{
		cout<<endl<<x<<" Harftir.";
	}
	cout<<endl<<"Devam Etmek �stiyor Musunuz(E/H) ? : ";
	sec=getche();
	if (sec=='E'||sec=='e'){
		cout<<endl<<"Devam Ediliyor...";
		sleep(3);
	}
	else if(sec=='H'||sec=='h'){
		cout<<endl<<"Yine Bekleriz...";
		exit(3);
	}
	else{
		cout<<endl<<"Yanl�� De�er Girildi...";
		abort();
	}
}
}
