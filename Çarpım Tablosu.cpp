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
	cout<<"Programa Ho�geldiniz...";
	int sayi;
	cout<<endl<<"Hangi Say�ya Kadar �arp�m Tablosu Olu�turmak �stiyorsunuz? : ";
	cin>>sayi;
	CarpimTablosu(sayi);
	
}
