#include <iostream>
using namespace std;

main(){
	setlocale(LC_ALL,"Turkish");
	cout<<"Girilen Nota Göre Öðrenicinin Sýnýf Geçme Durumunu Ekrana Yazdýran Programa Hoþgeldiniz...";
	float grade [39];
	for (int i=1;i<=40;i++){
		for (int e=0;e<40;e++){
		cout<<endl<<i<<"."<<"Öðrencinin Notunu Giriniz: ";
		cin>>grade[e];
		if (grade[e]>=50&& grade[e]<=100){
			cout<<"Geçen "<<"Öðrencinin Notu: "<<grade[e]<<endl;
		}
		else if(grade[e]<50&& grade[e]>=0){
			cout<<"Kalan Öðrencinin Notu: "<<grade[e]<<endl;
		}
		else {
			cout<<"Yanlýþ Girdiniz..."<<endl;
			cout<<"Tekrar Deneyiniz..."<<endl;
			continue;
		}
		break;
	}
}

}
