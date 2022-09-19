#include <iostream>
using namespace std;

main(){
	setlocale(LC_ALL,"Turkish");
	#define pi 3.14
	float cevre,r,alan;
	cout<<"Dairenin Yarýçapýný Giriniz= ";
	cin>>r;
	cevre=2*pi*r;
	alan=pi*r*r;
	cout<<"Dairenin Çevresi: "<<cevre <<"\nDairenin Alaný: "<<alan;
	}
