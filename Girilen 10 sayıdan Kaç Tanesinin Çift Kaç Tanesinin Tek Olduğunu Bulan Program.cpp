#include<iostream>
using namespace std;
void cift_bulma(int *a,int b){
	int cift=0,tek=0;
	for(int i=0;i<10;i++){
		if(a[i]%2==0){
			cift++;
		}
		else{
			tek++;
		}
	}
cout<<"Girilen Say�lar�n ��inde Tek Olanlar�n Adedi: "<<tek<<endl<<"Girilen Say�lar�n ��inde �ift Olanlar�n Adedi: "<<cift;
}
int main(){
	setlocale(LC_ALL,"Turkish");
	int sayi[10];
	cout<<"Girilen 10 say�dan Ka� Tanesinin �ift Ka� Tanesinin Tek Oldu�unu Bulan Programa Ho�geldiniz...\n";
	for(int i=1;i<=10;i++){
		cout<<i<<". Say�y� Giriniz: ";
		cin>>sayi[i];
		cout<<endl;
	}
cift_bulma(sayi,sizeof(sayi)/4);
return 0;
}
