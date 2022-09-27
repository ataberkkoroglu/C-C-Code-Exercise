#include<iostream>
#include<conio.h>
#include<unistd.h>
#include<stdlib.h>
using namespace std;

int main(void){
setlocale(LC_ALL,"Turkish");
cout<<"Programa Hoþgeldiniz...";
int sayi,sayac=0,sayi2,sayi3;
char sec;
while(1){

while(1){
cout<<endl<<"Sayý Giriniz: ";
cin>>sayi;
if (sayi>=0){
	break;
}
}
sayi2=sayi;
sayi3=sayi;
while(1){
	sayac++;
	if (sayi>=0 && sayi<10){
		break;
	}
	else{
	sayi /=10;	
	}

}
cout<<endl<<sayi2<<" Sayýsý "<<sayac<<" Basamaklý Bir Sayýdýr"<<endl;
int x[sayac],i=0;
for (int k=0;k<=sayac-1;k++){
	
	x[k]=sayi2%10;
	sayi2 /=10;
}
cout<<sayi3<<" nin Terse Çevrilmiþ Hali: ";
for (int e=0;e<=sayac-1;e++){
	cout<<x[e];
}
while(1){

cout<<endl<<"Programa Devam Etmek Ýstiyor Musunuz(E/H) ? : ";
sec=getche();
if (sec=='E'||sec=='e'){
	cout<<"\nPrograma Devam Ediliyor...";
	sleep(3);
	break;
}
else if (sec=='H' ||sec=='h'){
	cout<<"\nYine Bekleriz...";
	exit(3);
}
else{
	cout<<"\nYanlýþ Girildi...\a";
}
}
}
}
