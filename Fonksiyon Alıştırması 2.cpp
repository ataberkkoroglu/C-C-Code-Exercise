#include <iostream>
using namespace std;

int siralama(int a,int b,int c){
	if(a>b>c){
		return a-c;
	}
    else if(a>c>b){
    	return a-b;
	}
	else if(b>a>c){
		return b-c;
	}
	else if(b>c>a){
		return b-a;
	}
	else if(c>b>a){
		return c-a;
	}
	else if(c>a>b){
		return c-b;
	}
	else {
	  cout<<"Girdi�iniz Say�lardan En Az Biri E�ittir.";
	}
}

main(){
	setlocale(LC_ALL,"Turkish");
	cout<<"Programa Ho�geldiniz";
    int sayi[2];
    for(int i=0;i<3;i++){
    	cout<<i+1<<"."<<" Say�y� Giriniz: ";
    	cin>>sayi[i];
    siralama(sayi[0],sayi[1],sayi[2]);
	}
}
