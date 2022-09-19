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
cout<<"Girilen Sayý Dizisinin En Büyük ve En Küçük Sayýlarýný Gösteren Programa Hoþgeldiniz...\n";
int n;
cout<<"Kaç Tane Sayý Girmek Ýstiyorsunuz: ";
cin>>n;
int y=n-1;
int sayi[y];
for(int i=0;i<=y;i++){
	cout<<i+1<<". Sayýyý Giriniz: ";
	cin>>sayi[i];
}
//cout<<sayi[0]<<endl;
sirala(sayi,y);
cout<<endl<<"En Küçük Sayý: "<<sayi[n-n]<<endl<<"En Büyük Sayý: "<<sayi[y];	
return 0;
}
