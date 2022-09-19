#include<iostream>
using namespace std;

main(){
	setlocale(LC_ALL,"Turkish");
	cout<<"10 ile 1000 Arasýndaki Tam Kare Sayýlarý Ekrana Yazdýran Programa Hoþgeldiniz..."<<endl;
	for (int i=1;i<=1000;i++){
		if(i*i>10&&i*i<1000){
			cout<<i*i<<endl;		
	}
	}
}
