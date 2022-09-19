#include<iostream>
using namespace std;
int *CarpimTablosu(int &a){
	for(int i=1;i<=a;i++){
		
		for (int e=1;e<=10;e++){
			cout<<i*e<<'\t';
				
			}
		printf("%c",'\n');	
		}
	
	}
int main(void){
	setlocale(LC_ALL,"Turkish");
	cout<<"Programa Hoþgeldiniz...";
	int sayi;
	cout<<endl<<"Hangi Sayýya Kadar Çarpým Tablosu Oluþturmak Ýstiyorsunuz? : ";
	cin>>sayi;
	CarpimTablosu(sayi);
	
}
