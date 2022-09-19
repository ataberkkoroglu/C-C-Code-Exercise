#include<iostream>
#include <math.h>
using namespace std;
main(){
	setlocale(LC_ALL,"Turkish");
	printf("Üçgenin Hipotenüsü Bulma Programýna Hoþgeldiniz...\n");
	float x, y;
	double z;
	cout<<"Üçgenin Metre Cinsinden 1. Kenarýný Giriniz= ";
	cin>>x;
	cout<<"Üçgenin Metre Cinsinden  2. Kenarýný Giriniz= ";
	cin>>y;
	z=x*x+y*y;
	cout<<"Üçgenin En Uzun Kenarý " <<pow(z,0.5) <<" Metredir.";
	
	
}
