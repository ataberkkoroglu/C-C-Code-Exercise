#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	setlocale(LC_ALL,"Turkish");
	printf("Programa Ho�geldiniz...\n");
	int sayi[3];
	int temp,i,e;
    for(i=0;i<=2;i++){
    	cout<<endl<<i+1<<". Say�y� Giriniz: ";
    	cin>>sayi[i];
	}
	for(e=0;e<=1;e++){
		if(sayi[e]>sayi[e+1]){
			temp=sayi[e];
			sayi[e]=sayi[e+1];
			sayi[e+1]=temp;
			
		}
		}

		
printf("\nEn B�y�k Say�yla Ortanca Say�n�n Fark�: %d ",sayi[2]-sayi[1]);
printf("\nOrtanca Say�yla En K���k Say�n�n Fark�: %d ",sayi[1]-sayi[0]);

return 0;
}
