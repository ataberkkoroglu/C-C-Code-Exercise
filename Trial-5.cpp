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
			cout<<Ad<<" "<<Soyad<<"'nin Maa��"<<Maas<<endl;
		}
		void GetBilgileriGetir(){
			cout<<"�al��an�n Ad�: "<<Ad<<endl<<"�al��an�n Soyad�: "<<Soyad<<endl;
			cout<<"�al��an�n Maa��: "<<Maas<<endl<<"�al��an�n �al��t��� Departman: "<<Birim<<endl;
		}
		void GetAd(){
			cout<<"�al��an�n Ad�: "<<Ad<<endl;
		}
		void GetSoyad(){
			cout<<"�al��an�n Soyad�: "<<Soyad<<endl;

		}
		void GetBirim(){
			cout<<"�al��an�n �al��t��� Departman: "<<Birim<<endl;
		}
};
class MaviYaka:public Calisan{
	public:
		MaviYaka(string ad,string soyad,double maas,string Birim):Calisan(ad,soyad,maas,Birim){

		}
		void ZamYap(){
			Maas *=0.25;
			cout<<"�al��an�n Ad�: "<<Ad<<"\n"<<"Maa��: "<<Maas<<endl;
		}

};
class BeyazYaka:public Calisan{
	    public:
		BeyazYaka(string ad,string soyad,double maas,string Birim):Calisan(ad,soyad,maas,Birim){

		}
		void ZamYap(){
			Maas *=0.25;
			cout<<"�al��an�n Ad�: "<<Ad<<"\n"<<"Maa��: "<<Maas<<endl;
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
	cout<<"Programa Ho�geldiniz...";
	file=fopen("Maviyaka.txt","r+");
	fp=fopen("Beyazyaka.txt","r+");
	if (file==NULL || fp==NULL)
	{
	file=fopen("Maviyaka.txt","a+");
	fp=fopen("Beyazyaka.txt","a+");
	}

	while(1){
	cout<<endl<<"1-Mavi Yaka"<<endl<<"2-Beyaz Yaka";
	cout<<endl<<"Girmek �stedi�iniz �al��an�n Hangi Kategoride �al���yor(1/2)? : ";
	cin>>Bolum;
	if (Bolum==1){

		cout<<endl<<"�al��an�n Ad�n� Giriniz: ";
		scanf("%s",&Ad);
		cout<<endl<<"�al��an�n Soyad�n� Yaz�n�z: ";
		scanf("%s",&Soyad);
		cout<<endl<<"�al��an�n Maa��n� Yaz�n�z: ";
		cin>>Maas;
		cout<<endl<<"�al��an�n Birimini Yaz�n�z: ";
		scanf("%s",&Birim);
		MaviYaka Calisan(Ad,Soyad,Maas,Birim);
		cout<<endl<<sizeof(Calisan);
		Calisan.GetBilgileriGetir();
		fwrite(&Calisan,sizeof(Calisan),1,file);
}
	else if (Bolum==2){

		cout<<endl<<"�al��an�n Ad�n� Giriniz: ";
		scanf("%s",&Ad2);
		cout<<endl<<"�al��an�n Soyad�n� Yaz�n�z: ";
		scanf("%s",&Soyad2);
		cout<<endl<<"�al��an�n Maa��n� Yaz�n�z: ";
		scanf("%lf",&Maas2);
		cout<<endl<<"�al��an�n Birimini Yaz�n�z: ";
		scanf("%s",&Birim2);
		BeyazYaka Calisan2(Ad2,Soyad2,Maas2,Birim2);
		Calisan2.GetBilgileriGetir();
		fwrite(&Calisan2,sizeof(Calisan2),1,fp);
}


    else{
    	cout<<endl<<"Yanl�� De�er Girdiniz...";
    	cout<<endl<<"Tekrar Deneyiniz...";
	}
	cout<<endl<<"Devam Etmek �stiyor Musunuz(E/H) ? : ";
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
		cout<<endl<<"Yanl�� Girildi...";
		fclose(file);
		fclose(fp);
		abort();
	}
}
}



