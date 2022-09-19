#include<iostream>
using namespace std;
main(){
float h;
float taban_uzunlugu;
//float ucgen_alani;
setlocale(LC_ALL,"Turkish");
cout<<"Üçgenin taban Uzunluðunu Giriniz= ";
cin>> taban_uzunlugu;
cout<<"Üçgenin Yüksekliðini Giriniz= ";
cin>> h;
cout<<"Üçgenin Alaný= "<< taban_uzunlugu*h/2;
}
