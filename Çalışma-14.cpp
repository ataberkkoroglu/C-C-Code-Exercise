#include<iostream>
#include<cstring>
using namespace std;

int main(void){
	setlocale(LC_ALL,"Turkish");
	cout<<"Programa Hoþgeldiniz...";
    int sayi,ters,kalan; 
    printf("\nBir sayi giriniz : "); scanf("%d",&sayi);

    while(sayi > 0){
        kalan = sayi % 10;
        ters = ters * 10 + kalan;
        sayi = sayi / 10;
    }

    printf("Girdiginiz sayinin tersi : %d", ters);
}
