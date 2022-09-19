#include<iostream>
using namespace std;

int main(){
 setlocale(LC_ALL,"Turkish");
 cout<<"Programa Hoþgeldiniz...";
 int n,toplam,r;
 cout<<endl<<"Kaç Tane Sayý Girmek Ýstiyorsunuz: ";
 cin>>n;
 int sayi[n];
 for(int i=0;i<n;i++){
 	cout<<endl<<i+1<<". "<<"Sayýyý Giriniz: ";
 	cin>>sayi[i];
 	toplam +=sayi[i];
 }
int temp;
if(n==1){
	cout<<"En Küçük Sayý: "<<sayi[0]<<" 0.indekstedir.";
}

else if(n<=0){
  return 0;
}
else {

	 for (int e=0;e<n-1;e++){
	   if(sayi[e+1]<sayi[e]){
	   	    temp=sayi[e];
	   	    sayi[e]=sayi[e+1];
	   	    sayi[e+1]=temp;
	   }
	}
     for(int i=0;i<n;i++){
     	cout<<sayi[i]<<" - ";
	 }
}
cout<<endl<<"En Büyük Sayý: "<<sayi[n-1];
return 0;
}
