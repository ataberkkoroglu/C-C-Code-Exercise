#include <iostream>
using namespace std;

int main(){
setlocale(LC_ALL,"Turkish");
cout<<"Girdi�iniz Say�ya Kadar Asal Say� Bulma Program�na Ho�geldiniz...";
int sayi;
cout<<endl<<"Girmek �stedi�iniz Say�y� Giriniz: ";
cin>>sayi;
if (sayi==2){
	cout<<sayi<<" Say�s� Asal Say�d�r.";
}
else{

for (int i=2;i<sayi;i++){
		if(sayi%i==0){
			cout<<sayi<<" Say�s� Asal Say� De�ildir."<<endl;
			break;
		}
		if((i+1)==sayi){
			cout<<sayi<<" Say�s� Asal Say�d�r."<<endl;
		}
	}

return 0;
}
}
