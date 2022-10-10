#include<iostream>
using namespace std;

class X{
	int a;
	public:
		X(int c){
			a=c;
		}
	friend class Y;
};

class Y{
	public:
		void Plus(X &y){
	      cout<<y.a+10;
		}
};

int main(void){
	setlocale(LC_ALL,"Turkish");
	cout<<"Programa Hoþgeldiniz...";
	int sayi;
	cout<<endl<<"Sayýyý Giriniz: ";
	cin>>sayi;
	X x(sayi);
	Y y;
	y.Plus(x);
}
