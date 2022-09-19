#include <iostream>
using namespace std;

int main(){
setlocale(LC_ALL,"Turkish");
cout<<"1-100 Kadarki Asal Sayýlarý Hem Bulan Hem de Adetlerini Gösteren C++ Programýna Hoþgeldiniz...\n";
int sayi;
int sayac=0;
for (sayi=2;sayi<100;sayi++){
	for(int i=3;i<100;i++)
	 if (sayi==3 || sayi==2){
	 	cout<<sayi<<" Sayýsý Asal Sayýdýr."<<endl;
	 	break;
	 }
	 else if(sayi>i){
	  if (sayi%i==0){
	  	break;
	  }
	  if((i+1)==sayi){
	  	cout<<sayi<<" Sayýsý Asal Sayýdýr."<<endl;
	  	sayac++;
	  	break;
	  }	  
  

}
}
cout <<"Bu Aralýkta Kaç Tane Asal Sayý Var:"<<sayac<<endl;		
	
	
	
	
	
	
	
	
return 0;
}
