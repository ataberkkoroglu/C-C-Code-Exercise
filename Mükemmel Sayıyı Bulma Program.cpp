#include <iostream>
using namespace std;

main(){
	setlocale(LC_ALL,"Turkish");
	cout<<"M�kemmel Say�y� Bulma Program�na Ho�geldiniz...";
	int x,toplam=0;
	
	cout<<endl<<"Girmek �stedi�iniz Say�y� Giriniz= ";
	cin>> x;
	for (int i=1;i<=x/2;i++){
		if (x%i==0){
		
		toplam=toplam+i;
	}
}
        if(x==toplam){
		  cout<<x<<" Say�s� Bir M�kemmel Say�d�r.";
	}
		else {
			cout <<x<<" Say�s� M�kemmel Say� De�ildir.";
		}
}


