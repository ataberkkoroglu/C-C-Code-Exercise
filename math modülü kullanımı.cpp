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
cout<<"Ýlk Sayýyý Giriniz= ";
cin>>a;
cout<<"Ýkinci Sayýyý Giriniz= ";
cin>>b;
islem1=a+b;
cout<<"Toplama: "<<islem1<<endl;
islem2=a-b;
cout<<"Çýkarma: "<<islem2<<endl;
islem3=a*b;
cout<<"Çarpma: "<<islem3<<endl;
islem4=float(a)/b;
cout<<"Bölme: "<<islem4<<endl;
islem5= a%b;
cout<<"Kalan: "<<islem5<<endl;
islem6=pow(a,b);
cout<<"Ýlk Sayýnýn Ýkinci Sayý Üssüsü: "<<islem6<<endl;
islem7=pow(b,a);
cout<<"Ýkinci Sayýnýn Birinci Sayi Üssüsü: "<<islem7<<endl;
islem8=sqrt(a);
cout<<"1. Sayinin Karekökü: "<<islem8<<endl;
islem9=sqrt(b);
cout<<"2.Sayýnýn Karekökü: "<<islem9<<endl;











}
