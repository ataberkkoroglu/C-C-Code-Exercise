#include<iostream>
using namespace std;

int main(){
 setlocale(LC_ALL,"Turkish");
 cout<<"Programa Ho�geldiniz...";
 int n,toplam,r;
 cout<<endl<<"Ka� Tane Say� Girmek �stiyorsunuz: ";
 cin>>n;
 int sayi[n];
 for(int i=0;i<n;i++){
 	cout<<endl<<i+1<<". "<<"Say�y� Giriniz: ";
 	cin>>sayi[i];
 	toplam +=sayi[i];
 }
int temp;
if(n==1){
	cout<<"En K���k Say�: "<<sayi[0]<<" 0.indekstedir.";
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
cout<<endl<<"En B�y�k Say�: "<<sayi[n-1];
return 0;
}
