#include<iostream>
#include<stdlib.h>
using namespace std;

int main(void){
	setlocale(LC_ALL,"Turkish");
	int sayac=0;
	char Cumle[300];
	cout<<"Programa Ho�geldiniz...";
	cout<<endl<<"Yazmak �stedi�iniz C�mleyi Yaz�n�z: ";
	cin.getline(Cumle,300);

	for(int i=0;i<300;i++){
		if(Cumle[i]=='\0'){
			break;
		}
	  else if (Cumle[i]>=48 && Cumle[i]<=57){ //Ascii Tablosuna G�re Yap�lm��t�r.
			sayac ++;
		}
	}
	cout<<endl<<"Yaz�lan Metinde "<<sayac<<" Tane Say� Vard�r.";
}
