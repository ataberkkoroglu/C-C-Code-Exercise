#include<iostream>
using namespace std;

main(){
setlocale(LC_ALL,"Turkish");
int i,tek_toplami,cift_toplami;
cout<<"Programa Hoþgeldiniz...";
for(i=1;i<500;i++){
	if(i%2==0){
		cift_toplami +=1;
	}
	else {
		tek_toplami +=1;
	}
}
cout<<endl<<"Pozitif Sayýlarýnýn Toplamý: "<<cift_toplami;
cout<<endl<<"Tek Sayýlarýnýn Toplamý: "<<tek_toplami;

if((cift_toplami-tek_toplami)<0){
	printf("\nNegatif");
}
else if((cift_toplami-tek_toplami)>0){
	printf("\nPozitif");
}
else {
	printf("\nBirbirlerine Eþittir");
}
}
