#include<iostream>
using namespace std;

main(){
setlocale(LC_ALL,"Turkish");
int i=0;
int sayi;
cout<<"Programa Ho�geldiniz...";
while (i<=3){
	
	cout<<endl<<"Girmek �stedi�iniz Say�y� Giriniz: ";
	cin>>sayi;
	i++;
	if(sayi>10 &&sayi<200){
	  int x=3*sayi+2;
	  if (x%5==0){
	  	cout<<sayi<<" Uygun Say�d�r."<<endl;
	  }
	}
	else {
		cout<<"Girdi�iniz Say� Uygun De�ildir.";
	}
}
}
