#include<iostream>
using namespace std;
main(){
float h;
float taban_uzunlugu;
//float ucgen_alani;
setlocale(LC_ALL,"Turkish");
cout<<"��genin taban Uzunlu�unu Giriniz= ";
cin>> taban_uzunlugu;
cout<<"��genin Y�ksekli�ini Giriniz= ";
cin>> h;
cout<<"��genin Alan�= "<< taban_uzunlugu*h/2;
}
