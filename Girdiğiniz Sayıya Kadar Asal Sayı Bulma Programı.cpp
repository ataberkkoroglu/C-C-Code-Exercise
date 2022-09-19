#include <iostream>
using namespace std;

int main(){
setlocale(LC_ALL,"Turkish");
cout<<"Girdiðiniz Sayýya Kadar Asal Sayý Bulma Programýna Hoþgeldiniz...";
int sayi;
cout<<endl<<"Girmek Ýstediðiniz Sayýyý Giriniz: ";
cin>>sayi;
if (sayi==2){
	cout<<sayi<<" Sayýsý Asal Sayýdýr.";
}
else{

for (int i=2;i<sayi;i++){
		if(sayi%i==0){
			cout<<sayi<<" Sayýsý Asal Sayý Deðildir."<<endl;
			break;
		}
		if((i+1)==sayi){
			cout<<sayi<<" Sayýsý Asal Sayýdýr."<<endl;
		}
	}

return 0;
}
}
