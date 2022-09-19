#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<unistd.h>
using namespace std;

int main(void){
	setlocale(LC_ALL,"Turkish");
	cout<<"Programa Hoþgeldiniz...";
	char x,sec;
	while(1){
	cout<<endl<<"Klavyenizden Herhangi Bir Tuþa Basýnýz: ";
	cin>>x;
	if (x>=0 && x<=64 || x>90 && x<96 ||x>122 && x<128){
		cout<<endl<<x<<" Harf Deðildir.";
	}
	else{
		cout<<endl<<x<<" Harftir.";
	}
	cout<<endl<<"Devam Etmek Ýstiyor Musunuz(E/H) ? : ";
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
		cout<<endl<<"Yanlýþ Deðer Girildi...";
		abort();
	}
}
}
