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
cout<<"Girilen Sayýlarýn Ýçinde Tek Olanlarýn Adedi: "<<tek<<endl<<"Girilen Sayýlarýn Ýçinde Çift Olanlarýn Adedi: "<<cift;
}
int main(){
	setlocale(LC_ALL,"Turkish");
	int sayi[10];
	cout<<"Girilen 10 sayýdan Kaç Tanesinin Çift Kaç Tanesinin Tek Olduðunu Bulan Programa Hoþgeldiniz...\n";
	for(int i=1;i<=10;i++){
		cout<<i<<". Sayýyý Giriniz: ";
		cin>>sayi[i];
		cout<<endl;
	}
cift_bulma(sayi,sizeof(sayi)/4);
return 0;
}
