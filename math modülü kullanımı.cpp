#include <iostream>
#include<math.h>
using namespace std;
main (){
int a;
int b;
int islem1,islem2,islem3,islem5;
double islem6,islem7;
float islem8,islem9;
float islem4;
setlocale(LC_ALL,"Turkish");
cout<<"�lk Say�y� Giriniz= ";
cin>>a;
cout<<"�kinci Say�y� Giriniz= ";
cin>>b;
islem1=a+b;
cout<<"Toplama: "<<islem1<<endl;
islem2=a-b;
cout<<"��karma: "<<islem2<<endl;
islem3=a*b;
cout<<"�arpma: "<<islem3<<endl;
islem4=float(a)/b;
cout<<"B�lme: "<<islem4<<endl;
islem5= a%b;
cout<<"Kalan: "<<islem5<<endl;
islem6=pow(a,b);
cout<<"�lk Say�n�n �kinci Say� �ss�s�: "<<islem6<<endl;
islem7=pow(b,a);
cout<<"�kinci Say�n�n Birinci Sayi �ss�s�: "<<islem7<<endl;
islem8=sqrt(a);
cout<<"1. Sayinin Karek�k�: "<<islem8<<endl;
islem9=sqrt(b);
cout<<"2.Say�n�n Karek�k�: "<<islem9<<endl;











}
