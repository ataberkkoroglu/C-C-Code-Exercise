#include <iostream>
using namespace std;

int main(){
setlocale(LC_ALL,"Turkish");
cout<<"1-100 Kadarki Asal Say�lar� Hem Bulan Hem de Adetlerini G�steren C++ Program�na Ho�geldiniz...\n";
int sayi;
int sayac=0;
for (sayi=2;sayi<100;sayi++){
	for(int i=3;i<100;i++)
	 if (sayi==3 || sayi==2){
	 	cout<<sayi<<" Say�s� Asal Say�d�r."<<endl;
	 	break;
	 }
	 else if(sayi>i){
	  if (sayi%i==0){
	  	break;
	  }
	  if((i+1)==sayi){
	  	cout<<sayi<<" Say�s� Asal Say�d�r."<<endl;
	  	sayac++;
	  	break;
	  }	  
  

}
}
cout <<"Bu Aral�kta Ka� Tane Asal Say� Var:"<<sayac<<endl;		
	
	
	
	
	
	
	
	
return 0;
}
