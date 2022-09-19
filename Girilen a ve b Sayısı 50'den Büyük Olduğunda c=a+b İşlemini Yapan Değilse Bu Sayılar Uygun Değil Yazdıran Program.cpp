#include <iostream>
using namespace std;

main(){
	setlocale(LC_ALL,"Turkish");
	cout<<"Girilen a ve b Sayýsý 50'den Büyük Olduðunda c=a+b Ýþlemini Yapan Deðilse Bu Sayýlar Uygun Deðil Yazdýran Programa Hoþgeldiniz...";
	float a;
	float b;
	cout <<endl<<"Ýlk Sayýyý Giriniz: ";
	cin>> a;
	cout<< "Ýkinci Sayýyý Giriniz: ";
	cin>> b;
	if (a>50 &&b>50){
		cout << a << "+"<< b <<"="<< a+b<<endl;
	}
	else {
		cout<<"Girdiðiniz Sayýlar Uygun Deðildir."<<endl;
	}
	
}
