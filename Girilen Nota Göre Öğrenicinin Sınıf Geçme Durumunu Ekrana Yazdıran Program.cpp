#include <iostream>
using namespace std;

main(){
	setlocale(LC_ALL,"Turkish");
	cout<<"Girilen Nota G�re ��renicinin S�n�f Ge�me Durumunu Ekrana Yazd�ran Programa Ho�geldiniz...";
	float grade [39];
	for (int i=1;i<=40;i++){
		for (int e=0;e<40;e++){
		cout<<endl<<i<<"."<<"��rencinin Notunu Giriniz: ";
		cin>>grade[e];
		if (grade[e]>=50&& grade[e]<=100){
			cout<<"Ge�en "<<"��rencinin Notu: "<<grade[e]<<endl;
		}
		else if(grade[e]<50&& grade[e]>=0){
			cout<<"Kalan ��rencinin Notu: "<<grade[e]<<endl;
		}
		else {
			cout<<"Yanl�� Girdiniz..."<<endl;
			cout<<"Tekrar Deneyiniz..."<<endl;
			continue;
		}
		break;
	}
}

}
