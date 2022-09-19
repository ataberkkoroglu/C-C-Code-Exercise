#include<iostream>
#include<conio.h>
#include<unistd.h>
#include<stdlib.h>

using namespace std;

class HesapMakinesi{
	protected:
	int sayi;
	int sayi2;
	public:
		HesapMakinesi(int sayi,int sayi2){
			this->sayi=sayi;
			this->sayi2=sayi2;
		}
		virtual void Islem()=0;
};
class Toplama:public HesapMakinesi{
	int toplam;
	public:
		Toplama(int sayi,int sayi2):HesapMakinesi(sayi,sayi2){
			
		}
		void Islem(){
			toplam=sayi+sayi2;
			cout<<endl<<toplam;
		}
};
class Cikarma:public HesapMakinesi{
	int fark;
	public:
		Cikarma(int sayi,int sayi2):HesapMakinesi(sayi,sayi2){
			
		}
		void Islem(){
			fark=sayi-sayi2;
			cout<<endl<<fark;
		}
};
class Carpma:public HesapMakinesi{
	int carpma;
	public:
		Carpma(int sayi,int sayi2):HesapMakinesi(sayi,sayi2){
			
		}
		void Islem(){
			carpma=sayi*sayi2;
			cout<<endl<<carpma;
		}
};
class Bolme:public HesapMakinesi{
	float bolme;
	public:
		Bolme(int sayi,int sayi2):HesapMakinesi(sayi,sayi2){
			
		}
		void Islem(){
			bolme=sayi/float(sayi2);
			cout<<endl<<bolme;
		}
};
int main(void){
	setlocale(LC_ALL,"Turkish");
	cout<<"Programa Hoþgeldiniz...";
	int sayi,sayi2,sec;
	char ter;
	while(1){
	 cout<<"\n1.Sayýyý Giriniz: ";
	 cin>>sayi;
	 cout<<"\n2.Sayýyý Giriniz: ";
	 cin>>sayi2;
	 printf("\n---Kategoriler---");
	 printf("\n1-Toplama\n2-Çýkarma\n3-Çarpma\n4-Bölme");
	 while(1){
	 cout<<endl<<"Hangi Ýslemi Yapmak Ýstiyorsunuz(1/2/3/4) ? : ";
	 cin>>sec;
     if (sec==1){
     	Toplama toplama(sayi,sayi2);
     	toplama.Islem();
     	break;
	 }
	 else if (sec==2){
     	Cikarma cikarma(sayi,sayi2);
     	cikarma.Islem();
     	break;
	 }
	 else if (sec==3){
	 	Carpma carpma(sayi,sayi2);
	 	carpma.Islem();
	 	break;
	 }
	 else if (sec==4){
	 	Bolme bolme(sayi,sayi2);
	 	bolme.Islem();
	 	break;
	 }
	 else{
	 	printf("\nYanlýþ Girildi...\a");
	 }
}
while(1){
cout<<endl<<"Devam Etmek Ýstiyor Musunuz(E/H) ? : ";
ter=getche();
if (ter=='E'|| ter=='e'){
	cout<<endl<<"Programa Devam Ediliyor...";
	sleep(3);
	break;
}
else if (ter=='H'||ter=='h'){
	cout<<endl<<"Yine Bekleriz...";
	exit(3);
}	
else{
	cout<<endl<<"Yanlýþ Girildi...\a";
}
}
}
}
