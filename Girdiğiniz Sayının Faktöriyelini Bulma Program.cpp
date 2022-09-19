#include <iostream>
using namespace std;

main(){
 setlocale(LC_ALL,"Turkish");	
 printf("Girdiðiniz Sayýnýn Faktöriyelini Bulma Programýna Hoþgeldiniz...\n");
 int sayi;
 int i=0;
 int e=0;
 int sec;
 while (e<=3){
 cout<<"Devam Etmek Ýçin 1'i Etmemek Ýçin '0'a Basýnýz: ";
 cin>>sec;
 if(sec==1){
 
 while (i<10) {
 cout<<"Girmek Ýstediðiniz Sayýyý Giriniz= ";
 cin>> sayi;
 if (sayi==0|| sayi==1){
 	cout<<"Girmiþ Olduðunuz Sayýnýn Faktöriyeli Þudur: "<<1<<endl;
 	break;
 }
 else if(sayi<0){
 	printf("Yanlýþ Deðer Girdiniz...\n");
 	cout<<"Lütfen Tekrar Deneyiniz"<<endl;
 	i--;
 }
 else {
 	int sayac=1;
 	for (int u=1;u<=sayi;u++){
 		 sayac=sayac*u;
	 }
	 cout<<"Girmiþ Olduðunuz Sayýnýn Faktöriyeli: "<<sayac<<endl;
	 break;
 }
}
}
else if(sec==0){
	printf("Program Sonlandýrýlýyor...\n");
	cout<<"Yine Bekleriz...";
	break;
}
else {
	cout<<"Yanlýþ Deðer Girdiniz"<<endl;
	cout<<"Lütfen Tekrar Giriniz"<<endl;
	e++;
}
}
}
