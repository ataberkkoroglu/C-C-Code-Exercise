#include <iostream>
using namespace std;

main(){

setlocale(LC_ALL,"Turkish");
int vize;
float final;
cout<<"Vize Notunuzu Giriniz= ";
cin>>vize;
cout<<"Final Notunuzu Giriniz= ";
cin>>final;
cout<<"Dönem Ortalamanýz: "<<(vize*0.3)+(final*0.7);
}
