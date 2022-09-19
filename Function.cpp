#include <iostream>
using namespace std;

int siralama1(int a,int b,int c){

	if(a>b && b>c){
		return double(a);
	}
    else if(a>c && c>b){
      return double(a);
	}
	else if(b>a && a>c){
		return double(b);
	}
	else if(b>c && c>a){
		return double(b);
	}
	else if(c>b && b>a){
		return double(c);
	}
	else if(c>a &&a>b){
		return double(c);	
	}
	
}
int siralama2(int d,int e,int f){
	if(d>f &&f>e){
		return double(e);
	}
    else if(d>e && e>f){
      return double(f);
	}
	else if(e>d &&d>f){
		return double(f);
	}
	else if(e>f && f>d){
		return double(d);
	}
	else if(f>d && d>e){
		return double(e);
	}
	else if(f>e && e>d){
		return double(d);	
	}
}

main(){
    double islem;
	setlocale(LC_ALL,"Turkish");
	cout<<"Programa Hoþgeldiniz";
    int sayi1,sayi2,sayi3,i=0;
    while(i<1){
	     
    	cout<<endl<<i+1<<"."<<" Sayýyý Giriniz: ";
    	cin>>sayi1;
    	cout<<endl<<i+2<<"."<<" Sayýyý Giriniz: ";
    	cin>>sayi2;
    	cout<<endl<<i+3<<"."<<" Sayýyý Giriniz: ";
    	cin>>sayi3;
    	i++;
    //siralama1(sayi1,sayi2,sayi3);
    //siralama2(sayi1,sayi2,sayi3);
    islem=(siralama1(sayi1,sayi2,sayi3)-siralama2(sayi1,sayi2,sayi3));
    cout<<fixed<<islem;
	}
}
