#include <iostream>
using namespace std;

main(){
setlocale(LC_ALL,"Turkish");
cout<<"Asal Sayý Kontrolü Yapan Programa Hoþgeldiniz...";
int sayi;
cout<<endl<<"Kaç tane Asal Sayýyý Görüntülemek Ýstiyorsunuz: ";
cin>>sayi;
int sayi2[]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};
int i;
i=0;
while(i<sayi){
	
	cout<<sayi2[i]<<endl;
	i++;	
	}
}


