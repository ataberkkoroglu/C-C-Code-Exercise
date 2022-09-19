#include<iostream>
#include <cstring>
using namespace std;
int main(){
setlocale(LC_ALL,"Turkish");
cout<<"Programa Hoþgeldiniz...\n";
int sayi[50];
char isim_soyisim[21];
int no[50];
int i,k;
k=0;
for(i=0;i<50;i++){
cout<<endl<<"Öðrencinin Ýsim ve Soyismini Giriniz: ";
cin.getline(isim_soyisim,21);
cout<<endl<<"Öðrencinin Okul Numarasýný Giriniz: ";
cin>>no[i];
cout<<endl<<"Bilgilerini Girmiþ Olduðunuz Öðrencilerin Yýl Sonu Notunu Giriniz: ";
cin>>sayi[i];

if (sayi[i]>=50){
	printf("\n%s %d Bilgilerine Sahip Olan Öðrenci Dersi Geçmiþtir.\n",isim_soyisim,no[i]);
	k++;
}
}

cout<<endl<<k<<"Tane Öðrenci Dersi Geçmiþtir.";
return 0;
}
