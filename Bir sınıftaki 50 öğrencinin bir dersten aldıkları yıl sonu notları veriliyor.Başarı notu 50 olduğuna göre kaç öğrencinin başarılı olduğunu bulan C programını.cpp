#include<iostream>
#include <cstring>
using namespace std;
int main(){
setlocale(LC_ALL,"Turkish");
cout<<"Programa Ho�geldiniz...\n";
int sayi[50];
char isim_soyisim[21];
int no[50];
int i,k;
k=0;
for(i=0;i<50;i++){
cout<<endl<<"��rencinin �sim ve Soyismini Giriniz: ";
cin.getline(isim_soyisim,21);
cout<<endl<<"��rencinin Okul Numaras�n� Giriniz: ";
cin>>no[i];
cout<<endl<<"Bilgilerini Girmi� Oldu�unuz ��rencilerin Y�l Sonu Notunu Giriniz: ";
cin>>sayi[i];

if (sayi[i]>=50){
	printf("\n%s %d Bilgilerine Sahip Olan ��renci Dersi Ge�mi�tir.\n",isim_soyisim,no[i]);
	k++;
}
}

cout<<endl<<k<<"Tane ��renci Dersi Ge�mi�tir.";
return 0;
}
