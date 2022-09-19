#include<iostream>
#include<cstring>
#include<stdlib.h>
using namespace std;

int main(void){
	setlocale(LC_ALL,"Turkish");
	cout<<"Programa Hoþgeldiniz...";
	char Metin[3000];
	int a;
	cout<<"\nYazmak Ýstediðiniz Metni Yazýnýz: ";
	cin.getline(Metin,3000);
	strupr(Metin);
	for(int i=0;i<3000;i++){
		if(Metin[i]=='\0'){
			a=i;
		}
	}
	char Metin2[a];
    memcpy(Metin2,Metin,a);
    strrev(Metin2);
cout<<endl<<Metin2;	
}
