#include<iostream>
#include<conio.h>
using namespace std;

class Calisan{
	protected:
	     string Ad;
	     string Soyad;
	     double Maas;
	     string Birim;
	public:
		Calisan(string ad,string soyad,double maas,string Birim){
			Ad=ad;
			Soyad=soyad;
			Maas=maas;
			this->Birim=Birim;
		}
		Calisan(string ad,double Maas){
			Ad=ad;
			this->Maas=Maas;
		}
		void SetMaas(double maas){
			Maas=maas;
		}
		virtual void ZamYap()=0;

		void GetMaas(){
			cout<<Ad<<" "<<Soyad<<"'nin Maaþý"<<Maas<<endl;
		}
		void GetBilgileriGetir(){
			cout<<"Çalýþanýn Adý: "<<Ad<<endl<<"Çalýþanýn Soyadý: "<<Soyad<<endl;
			cout<<"Çalýþanýn Maaþý: "<<Maas<<endl<<"Çalýþanýn Çalýþtýðý Departman: "<<Birim<<endl;
		}
		void GetAd(){
			cout<<"Çalýþanýn Adý: "<<Ad<<endl;
		}
		void GetSoyad(){
			cout<<"Çalýþanýn Soyadý: "<<Soyad<<endl;

		}
		void GetBirim(){
			cout<<"Çalýþanýn Çalýþtýðý Departman: "<<Birim<<endl;
		}
};
class MaviYaka:public Calisan{
	public:
		MaviYaka(string ad,string soyad,double maas,string Birim):Calisan(ad,soyad,maas,Birim){

		}
		void ZamYap(){
			Maas *=0.25;
			cout<<"Çalýþanýn Adý: "<<Ad<<"\n"<<"Maaþý: "<<Maas<<endl;
		}

};
class BeyazYaka:public Calisan{
	    public:
		BeyazYaka(string ad,string soyad,double maas,string Birim):Calisan(ad,soyad,maas,Birim){

		}
		void ZamYap(){
			Maas *=0.25;
			cout<<"Çalýþanýn Adý: "<<Ad<<"\n"<<"Maaþý: "<<Maas<<endl;
		}

};
int main(void){
	setlocale(LC_ALL,"Turkish");
	int sayac1=0,sayac2=0;
	int Bolum;
	char sec;
	string Ad,Ad2;
	string Soyad,Soyad2;
	string Birim,Birim2;
	double Maas,Maas2;
	FILE *file;
	FILE *fp;
	cout<<"Programa Hoþgeldiniz...";
	file=fopen("Maviyaka.txt","r+");
	fp=fopen("Beyazyaka.txt","r+");
	if (file==NULL || fp==NULL)
	{
	file=fopen("Maviyaka.txt","a+");
	fp=fopen("Beyazyaka.txt","a+");
	}

	while(1){
	cout<<endl<<"1-Mavi Yaka"<<endl<<"2-Beyaz Yaka";
	cout<<endl<<"Girmek Ýstediðiniz Çalýþanýn Hangi Kategoride Çalýþýyor(1/2)? : ";
	cin>>Bolum;
	if (Bolum==1){

		cout<<endl<<"Çalýþanýn Adýný Giriniz: ";
		scanf("%s",&Ad);
		cout<<endl<<"Çalýþanýn Soyadýný Yazýnýz: ";
		scanf("%s",&Soyad);
		cout<<endl<<"Çalýþanýn Maaþýný Yazýnýz: ";
		cin>>Maas;
		cout<<endl<<"Çalýþanýn Birimini Yazýnýz: ";
		scanf("%s",&Birim);
		MaviYaka Calisan(Ad,Soyad,Maas,Birim);
		cout<<endl<<sizeof(Calisan);
		Calisan.GetBilgileriGetir();
		fwrite(&Calisan,sizeof(Calisan),1,file);
}
	else if (Bolum==2){

		cout<<endl<<"Çalýþanýn Adýný Giriniz: ";
		scanf("%s",&Ad2);
		cout<<endl<<"Çalýþanýn Soyadýný Yazýnýz: ";
		scanf("%s",&Soyad2);
		cout<<endl<<"Çalýþanýn Maaþýný Yazýnýz: ";
		scanf("%lf",&Maas2);
		cout<<endl<<"Çalýþanýn Birimini Yazýnýz: ";
		scanf("%s",&Birim2);
		BeyazYaka Calisan2(Ad2,Soyad2,Maas2,Birim2);
		Calisan2.GetBilgileriGetir();
		fwrite(&Calisan2,sizeof(Calisan2),1,fp);
}


    else{
    	cout<<endl<<"Yanlýþ Deðer Girdiniz...";
    	cout<<endl<<"Tekrar Deneyiniz...";
	}
	cout<<endl<<"Devam Etmek Ýstiyor Musunuz(E/H) ? : ";
	sec=getche();
	if (sec=='E'||sec=='e'){
		printf("\nPrograma Devam Ediliyor...");
	}
	else if(sec=='H'|| sec=='h'){
		cout<<endl<<"Yine Bekleriz...";
		fclose(file);
		fclose(fp);
		exit(4);
	}
	else{
		cout<<endl<<"Yanlýþ Girildi...";
		fclose(file);
		fclose(fp);
		abort();
	}
}
}



