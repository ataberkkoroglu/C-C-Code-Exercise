#include <iostream>
using namespace std;
void sirala(int *a,int b){
int temp;
for (int j=0;j<b;j++){
 for (int e=0;e<b;e++){
	if(a[e]>a[e+1]){
		temp=a[e];
		a[e]=a[e+1];
	    a[e+1]=temp;
	}
}
}
}
int main(){
setlocale(LC_ALL,"Turkish");
cout<<"Girilen Say� Dizisinin En B�y�k ve En K���k Say�lar�n� G�steren Programa Ho�geldiniz...\n";
int n;
cout<<"Ka� Tane Say� Girmek �stiyorsunuz: ";
cin>>n;
int y=n-1;
int sayi[y];
for(int i=0;i<=y;i++){
	cout<<i+1<<". Say�y� Giriniz: ";
	cin>>sayi[i];
}
//cout<<sayi[0]<<endl;
sirala(sayi,y);
cout<<endl<<"En K���k Say�: "<<sayi[n-n]<<endl<<"En B�y�k Say�: "<<sayi[y];	
return 0;
}
