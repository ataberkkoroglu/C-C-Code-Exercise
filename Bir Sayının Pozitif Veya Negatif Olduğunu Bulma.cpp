#include <iostream>
using namespace std;

main(){
setlocale(LC_ALL,"Turkish");
int i=0;
int sec;
cout<<"Say�n�n Negatif mi Pozitif mi Oldu�unu Bulma Program�na Ho�geldiniz..."<<endl;
while (i<5){

cout<<"Bu Programa Devam Etmek ��in '1'i Devam Etmemek icin '0' a Bas�n�z= ";
cin>>sec;
if (sec==1){

 int sayi;
 cout<<"Sayinizi Giriniz: ";
 cin>>sayi;
 if (sayi>0){
  cout <<sayi <<" Say�s� Pozitif Bir Say�d�r."<<endl;
  i++;
}
 else if (sayi<0){
   cout <<sayi <<" Say�s� Negatif Bir Say�d�r."<<endl;
   i++;
 
}
 else{
 
   cout<<"Yanl�� De�er Girdiniz"<<endl;
   printf("L�tfen Tekrar Giriniz.\n");
}
}

else if(sec==0){
	printf("Program Sonland�r�l�yor...\n");
	printf("Yine Bekleriz...");
	break;
}
else {
	cout<<"Yanl�� De�er Girdiniz.";
	cout <<"L�tfen Tekrar Deneyin..."<<endl;
	i++;
}

}
}
