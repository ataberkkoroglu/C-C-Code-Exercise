#include<iostream>
#include<stdlib.h>
#include<time.h>
#define randnum(min,max) ((rand() % (int) (((max) + 1) - (min))) + (min))
using namespace std;

int main(void){
	setlocale(LC_ALL,"Turkish");
	cout<<"Programa Ho�geldiniz...";
	int x,i=0;
    int sayac=0;
    srand(time(NULL));
	while(i<600){ 
    x= randnum(0,1000);
    if(x<100){
    	printf("\n100'den K���k OLan Say�: %d",x);
    	sayac++;
	}
    i++;
	
}
cout<<endl<<"100'den K���k Say�lar�n Adeti: "<< sayac;
}
