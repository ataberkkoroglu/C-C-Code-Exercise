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
cout<<"D�nem Ortalaman�z: "<<(vize*0.3)+(final*0.7);
}
