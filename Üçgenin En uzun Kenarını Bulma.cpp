#include<iostream>
#include <math.h>
using namespace std;
main(){
	setlocale(LC_ALL,"Turkish");
	printf("��genin Hipoten�s� Bulma Program�na Ho�geldiniz...\n");
	float x, y;
	double z;
	cout<<"��genin Metre Cinsinden 1. Kenar�n� Giriniz= ";
	cin>>x;
	cout<<"��genin Metre Cinsinden  2. Kenar�n� Giriniz= ";
	cin>>y;
	z=x*x+y*y;
	cout<<"��genin En Uzun Kenar� " <<pow(z,0.5) <<" Metredir.";
	
	
}
