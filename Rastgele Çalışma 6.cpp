#include<iostream>
using namespace std;

int main(void){
	setlocale(LC_ALL,"Turkish");
	cout<<"Programa Ho�geldiniz...";
	int sayi[2];
	for (int i=0;i<2;i++){
		cout<<endl<<i+1<<". Say�y� Giriniz: ";
		cin>>sayi[i];
	}
	int toplam=sayi[0]+sayi[1];
	if(toplam>=40 and toplam<=50){
		printf("Gen� Yaz�l�mc�");
	}
}
