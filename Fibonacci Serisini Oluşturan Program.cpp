#include<iostream>
using namespace std;

main(){
	setlocale(LC_ALL,"Turkish");
	cout<<"Fibonacci Serisini Olu�turan Programa Ho�geldiniz..."<<endl;
	int a=1,b=1,i,c;    
	for(i=2;i<=20;i++){
      c=a+b;	
	  a=b;
	  b=c;
      cout<<c<<"-";
      
	}
	
}
