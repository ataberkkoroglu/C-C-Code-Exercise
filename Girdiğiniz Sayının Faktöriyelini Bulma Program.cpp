#include <iostream>
using namespace std;

main(){
 setlocale(LC_ALL,"Turkish");	
 printf("Girdi�iniz Say�n�n Fakt�riyelini Bulma Program�na Ho�geldiniz...\n");
 int sayi;
 int i=0;
 int e=0;
 int sec;
 while (e<=3){
 cout<<"Devam Etmek ��in 1'i Etmemek ��in '0'a Bas�n�z: ";
 cin>>sec;
 if(sec==1){
 
 while (i<10) {
 cout<<"Girmek �stedi�iniz Say�y� Giriniz= ";
 cin>> sayi;
 if (sayi==0|| sayi==1){
 	cout<<"Girmi� Oldu�unuz Say�n�n Fakt�riyeli �udur: "<<1<<endl;
 	break;
 }
 else if(sayi<0){
 	printf("Yanl�� De�er Girdiniz...\n");
 	cout<<"L�tfen Tekrar Deneyiniz"<<endl;
 	i--;
 }
 else {
 	int sayac=1;
 	for (int u=1;u<=sayi;u++){
 		 sayac=sayac*u;
	 }
	 cout<<"Girmi� Oldu�unuz Say�n�n Fakt�riyeli: "<<sayac<<endl;
	 break;
 }
}
}
else if(sec==0){
	printf("Program Sonland�r�l�yor...\n");
	cout<<"Yine Bekleriz...";
	break;
}
else {
	cout<<"Yanl�� De�er Girdiniz"<<endl;
	cout<<"L�tfen Tekrar Giriniz"<<endl;
	e++;
}
}
}
