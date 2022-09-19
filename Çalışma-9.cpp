#include<iostream>
#include<stdlib.h>
using namespace std;

int main(void){
	setlocale(LC_ALL,"Turkish");
	int sayac=0;
	char Cumle[300];
	cout<<"Programa Hoþgeldiniz...";
	cout<<endl<<"Yazmak Ýstediðiniz Cümleyi Yazýnýz: ";
	cin.getline(Cumle,300);

	for(int i=0;i<300;i++){
		if(Cumle[i]=='\0'){
			break;
		}
	  else if (Cumle[i]>=48 && Cumle[i]<=57){ //Ascii Tablosuna Göre Yapýlmýþtýr.
			sayac ++;
		}
	}
	cout<<endl<<"Yazýlan Metinde "<<sayac<<" Tane Sayý Vardýr.";
}
