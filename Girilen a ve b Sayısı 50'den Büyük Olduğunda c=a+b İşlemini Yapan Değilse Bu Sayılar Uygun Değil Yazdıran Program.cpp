#include <iostream>
using namespace std;

main(){
	setlocale(LC_ALL,"Turkish");
	cout<<"Girilen a ve b Say�s� 50'den B�y�k Oldu�unda c=a+b ��lemini Yapan De�ilse Bu Say�lar Uygun De�il Yazd�ran Programa Ho�geldiniz...";
	float a;
	float b;
	cout <<endl<<"�lk Say�y� Giriniz: ";
	cin>> a;
	cout<< "�kinci Say�y� Giriniz: ";
	cin>> b;
	if (a>50 &&b>50){
		cout << a << "+"<< b <<"="<< a+b<<endl;
	}
	else {
		cout<<"Girdi�iniz Say�lar Uygun De�ildir."<<endl;
	}
	
}
