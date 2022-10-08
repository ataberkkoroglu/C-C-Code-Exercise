#include<iostream>
#include<unistd.h>
#include<conio.h>
#include<stdlib.h>

using namespace std;

int main(void){
setlocale(LC_ALL,"Turkish");
cout<<"Wecome To Program...";
int sayi,sayac=0,sayi2,sayac2=1,sayi3,sayi4;

cout<<endl<<"Write Number: ";
cin>>sayi;
sayi2=sayi;
sayi3=sayi2;
sayi4=sayi3;
while(1){
 sayi /=10;
 if (sayi==0){
 	sayac++;
    break;
 }
 else{
 	sayac++;
 }
}
int x[sayac],y[sayac];
for (int i=0;i<sayac;i++){
	x[i]=sayi2%10;
	sayi2 /=10;
	
}
for (int e=sayac;0<e;e--){
	y[e]=sayi3%10;
	sayi3 /=10;
}
for (int k=0;k<sayac;k++){
	if (x[sayac-k]==y[k])
		sayac2++;
		
}

if (sayac==sayac2){
	cout<<endl<<sayi4<<" Is One of Polindrom Numbers.";
}
else{
	cout<<endl<<sayi4<<" Isn't' One of Polindrom Numbers.";
}
}

