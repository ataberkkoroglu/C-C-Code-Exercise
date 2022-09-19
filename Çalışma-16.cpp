#include<iostream>
using namespace std;

int main(void){
	setlocale(LC_ALL,"Turkish");
	cout<<"Programa Hoþgeldiniz...";
	int sayi,temp,i=1;
	int sec;
	int ikilik[100];
	cout<<endl<<"Sayýyý Giriniz: ";
	cin>>sayi;
	temp=sayi;
	while(temp!=0){
		   ikilik[i]= temp % 2;
        temp = temp / 2;
        i++;
    }

    printf("%d sayisinin ikilik sayi sisteminde karsiligi : ", sayi);
    for(int j = i-1 ; j>0 ; j--)   
        printf("%d",ikilik[j]);
	}

