#include <iostream>
using namespace std;

main(){
	setlocale(LC_ALL,"Turkish");
	#define pi 3.14
	float cevre,r,alan;
	cout<<"Dairenin Yar��ap�n� Giriniz= ";
	cin>>r;
	cevre=2*pi*r;
	alan=pi*r*r;
	cout<<"Dairenin �evresi: "<<cevre <<"\nDairenin Alan�: "<<alan;
	}
