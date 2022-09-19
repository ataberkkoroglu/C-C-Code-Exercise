#include <iostream>
using namespace std;

main(){
setlocale(LC_ALL,"Turkish");
int i=0;
int sec;
cout<<"Sayýnýn Negatif mi Pozitif mi Olduðunu Bulma Programýna Hoþgeldiniz..."<<endl;
while (i<5){

cout<<"Bu Programa Devam Etmek Ýçin '1'i Devam Etmemek icin '0' a Basýnýz= ";
cin>>sec;
if (sec==1){

 int sayi;
 cout<<"Sayinizi Giriniz: ";
 cin>>sayi;
 if (sayi>0){
  cout <<sayi <<" Sayýsý Pozitif Bir Sayýdýr."<<endl;
  i++;
}
 else if (sayi<0){
   cout <<sayi <<" Sayýsý Negatif Bir Sayýdýr."<<endl;
   i++;
 
}
 else{
 
   cout<<"Yanlýþ Deðer Girdiniz"<<endl;
   printf("Lütfen Tekrar Giriniz.\n");
}
}

else if(sec==0){
	printf("Program Sonlandýrýlýyor...\n");
	printf("Yine Bekleriz...");
	break;
}
else {
	cout<<"Yanlýþ Deðer Girdiniz.";
	cout <<"Lütfen Tekrar Deneyin..."<<endl;
	i++;
}

}
}
