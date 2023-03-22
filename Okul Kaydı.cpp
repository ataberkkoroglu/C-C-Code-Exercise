#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#include<string>
#include<Windows.h>
#define randnum(min,max) ((rand() % (int) (((max) + 1) - (min))) + (min))
using namespace std;

class OkulKayit{
	protected:
	    string Ad;
	    string Ad2;
		string Soyad;
		string TC;
		string Tel;
		string Dy;
		
	public:
	
       OkulKayit(string ad,string ad2,string soyad,string tc,string tel,string Dy){
	     Ad=ad;
	     Ad2=ad2;
	     Soyad=soyad;
	     TC=tc;
	     Tel=tel;
	     this->Dy=Dy;
	   }
	  virtual void BilgileriGetir()=0;
	  void setTelDegistir(string tel){
	  	Tel=tel;
	  }
	   void GetTel(){
	  	cout<<"\nYeni Telefon Numaran�z: "<<Tel;
	  }
	  void setAdDegistir(string ad,string ad2){
	  	Ad=ad;
	  	Ad2=ad2;
	  }
	  void GetAd(){
	  	cout<<"\nYeni Ad�n�z: "<<Ad<<" "<<Ad2;
	  }
	  void setSoyadDegistir(string soyad){
	  	Soyad=soyad;
	  }
	  void GetSoyad(){
	  	cout<<"\nYeni Soyad�n�z: "<<Soyad;
	  }
	  void SetTcDegistir(string tc){
	  	TC=tc;
	  }
	  void GetTc(){
	  	cout<<"\nYeni TC Kimlik Numaran�z: "<<TC;
	  }
	  void SetDyDegistir(string Dy){
	  	this->Dy=Dy;
	  }
	  void GetDy(){
	  	cout<<"\nYeni Do�um Tarihiniz: "<<Dy;
	  }
};
class Ogrenci:public OkulKayit{
	
	int No;
	public:
		
		Ogrenci(string ad,string ad2,string soyad,string tc,string tel,string Dy,int no):OkulKayit(ad,ad2,soyad,tc,tel,Dy){
			No=no;
		
			
		}
		void BilgileriGetir(){
	  	 cout<<endl<<"Ad�: "<<Ad<<" "<<Ad2<<endl<<"Soyad: "<<Soyad<<endl<<"TC: "<<TC<<endl<<"Velisinin Telefon Numaras�: "<<Tel;
	  	 cout<<endl<<"Do�um Tarihi: "<<Dy<<"��renci Numaras�: "<<No;
	  }
	    
	  
	   	~Ogrenci(){
	   		cout<<endl<<"Destructor �al��t�...";
		   }
	  
};

class Ogretmen:public OkulKayit{
	string Brans;
	public:
		Ogretmen(string ad,string ad2,string soyad,string tc,string tel,string Dy,string Brans):OkulKayit(ad,ad2,soyad,tc,tel,Dy){
			this->Brans=Brans;
			
		}
		void BilgileriGetir(){
	  	 cout<<endl<<"Ad�: "<<Ad<<" "<<Ad2<<endl<<"Soyad: "<<Soyad<<endl<<"TC: "<<TC<<endl<<"Do�um Tarihi: "<<Dy<<endl<<"��retmenin Telefon Numaras�: "<<Tel;
	  	 cout<<endl<<"Bran�: "<<Brans;
	  }
	    void SetBransDegistir(string Brans){
	    	this->Brans=Brans;
		}
		void GetBrans(){
			cout<<"\nYeni Bran��n�z: "<<Brans;
		}
	  
	  ~Ogretmen(){
	   		cout<<endl<<"Destructor �al��t�...";
		   }
	   
};
class Personel:public OkulKayit{
	string Gorev;
	public:
		Personel(string ad,string ad2,string soyad,string tc,string tel,string Dy,string Gorev):OkulKayit(ad,ad2,soyad,tc,tel,Dy){
		this->Gorev=Gorev;
			
		}
		void BilgileriGetir(){
	  	 cout<<endl<<"Ad�: "<<Ad<<" "<<Ad2<<endl<<"Soyad: "<<Soyad<<endl<<"TC: "<<TC<<endl<<"Do�um Tarihi: "<<Dy<<endl<<"��retmenin Telefon Numaras�: "<<Tel;
	  	 cout<<endl<<"G�rev: "<<Gorev;
	  }
	    void SetGorevDegistir(string Gorev){
	    	this->Gorev=Gorev;
		}
	    void GetGorev(){
	    	cout<<"\nYeni Goreviniz: "<<Gorev;
		}
	  ~Personel(){
	   		cout<<endl<<"Destructor �al��t�...";
		   }
};

int main(void){

	setlocale(LC_ALL,"Turkish");
	cout<<"Programa Ho�geldiniz...";
	FILE *fp, *fp2,*fp3;
	int sec ,no;
	char Name[10],Name2[10],Name3[10],Name4[10],Name5[20],Name6[20];
	char ad,sec2,sec3;
	char Surname[11],Tc[11],Tel[11],Brans[30],Surname2[11],Tc2[11],Tel2[11];
	char Surname3[11],Tc3[11],Tel3[11],Gorev[30],Dy[11],Dy2[11],Dy3[11];
	int i=0,e=0,h=0;
	fp=fopen("Ogrenciler.txt","a+");
	fp2=fopen("Ogretmenler.txt","a+");
	fp3=fopen("Personeller.txt","a+");
	if(fp=='\0'|| fp2=='\0'||fp3=='\0'){
		printf("\nDosya Olu�turulamad�...");
	}
	else{

	while(1){
	cout<<endl<<"1-��renci\n2-��retmen\n3-Personel";
	cout<<endl<<"Hangi T�rde Kay�t Yapmak �stiyorsunuz(1/2/3) ? : ";
	cin>>sec;
	if (sec==1){
		for (int k=0;k<10;k++){
     	 	Name2[k]='\0';
		  }
		cout<<endl<<"��rencinin Ad�n� Yaz�n�z: ";
		cin>>Name;
		cout<<endl<<"�kinci Ad�n�z Var M�(E/H) ? : ";
		sec3=getche();
		if (sec3=='E'||sec3=='e'){
			cout<<endl<<"Ad�n�z: ";
			cin>>Name2;
		}
		else{
			for (int k=0;k<10;k++){
				Name2[k]='\0';
			}
		}
		cout<<endl<<"��rencinin Soyad�n� Yaz�n�z: ";
		cin>>Surname;
		cout<<endl<<"��rencinin TC Numaras�n� Giriniz: ";
		cin>>Tc;
		
		cout<<endl<<"��rencinin Velisinin Cep Telefon Numaras�n� Yaz�n�z: ";
		cin>>Tel;
		cout<<endl<<"��rencinin Do�um Y�l�n� Yaz�n�z(01/01/2001): ";
		cin>>Dy;		
		srand(time(NULL));
		no=randnum(0,1000);
		Ogrenci ogrenci(Name,Name2,Surname,Tc,Tel,Dy,no);
		
		i++;
		ogrenci.BilgileriGetir();
			if (i!=1){
			fprintf(fp,"\n");
		}
		fprintf(fp,"%d",i);
		fprintf(fp,")");
		fprintf(fp,"\t");
		cout<<"\nAd�n�z� De�i�tirmek �stiyor Musunuz(E/H) ? : ";
		sec3=getche();
		if (sec3=='E'||sec3=='e'){
			cout<<"\nYeni Ad�n�z� Giriniz: ";
			scanf("%s",&Name);
			cout<<"\nYeni �kinci Ad�n�z� Girmek �stiyor Musunuz(E/H) ? : ";
			sec3=getche();
			if (sec3=='E'||sec3=='e'){
				cout<<"\nYeni �kinci Ad�n�z� Giriniz: ";
			    scanf("%s",&Name2);
			}
			else{
				for (int i=0;i<10;i++){
					Name2[i]='\0';
				}
			}
			ogrenci.setAdDegistir(Name,Name2);
			ogrenci.GetAd();
		}
		fprintf(fp,"Name: ");
		fprintf(fp,"%s %s",Name,Name2);
		fprintf(fp,"\t");
		cout<<"\nSoyad�n�z� De�i�tirmek �stiyor Musunuz(E/H) ? : ";
		sec3=getche();
		if(sec3=='E'||sec3=='e'){
			cout<<"\nYeni Soyad�n�z� Yaz�n�z: ";
			cin>>Surname;
			
			ogrenci.setSoyadDegistir(Surname);
			ogrenci.GetSoyad();
		}
		fprintf(fp,"Surname: ");
		fprintf(fp,"%s",Surname);
		fprintf(fp,"\t");
		cout<<"\nTC kimlik Numaras�n� De�i�tirmek �stiyor Musunuz(E/H) ? : ";
		sec3=getche();
		if(sec3=='E'||sec3=='e'){
			cout<<"\nYeni TC Kimlik Numaras�n� Yaz�n�z: ";
			cin>>Tc;	
			ogrenci.SetTcDegistir(Tc);
			ogrenci.GetTc();
		}
		fprintf(fp," TC: ");
		fprintf(fp,"%s",Tc);
		fprintf(fp,"\t");
		cout<<"\nDo�um Tarihini De�i�tirmek �stiyor Musunuz(E/H) ? : ";
		sec3=getche();
		if(sec3=='E'||sec3=='e'){
			cout<<"\nYeni Do�um Tarihini Giriniz: ";
			cin>>Dy;
			ogrenci.SetDyDegistir(Dy);
			ogrenci.GetDy();
		}
		fprintf(fp,"Do�um Tarihi: %s\t",Dy);
		fprintf(fp,"Tel: ");
		cout<<endl<<"Cep Telefon Numaran�z� De�i�tirmek �stiyor Musunuz(E/H) ? : ";
		sec3=getche();
		if (sec3=='E'||sec3=='e'){
			cout<<endl<<"��rencinin Velisinin Yeni Cep Telefon Numaras�n� Yaz�n�z: ";
			cin>>Tel;		    
		    ogrenci.setTelDegistir(Tel);
		    ogrenci.GetTel();
		}
		fprintf(fp,"%s",Tel);
		fprintf(fp,"\t");
		fprintf(fp,"No: ");
		fprintf(fp,"%d\n",no);
		fseek(fp,sizeof(ogrenci),SEEK_SET);
		
}
     	if (sec==2){
     	for (int k=0;k<10;k++){
     	 	Name4[k]='\0';
		  }
		cout<<endl<<"��retmenin  Ad�n� Yaz�n�z: ";
		cin>>Name3;
		cout<<endl<<"�kinci Ad�n�z Var M�(E/H) ? : ";
		sec3=getche();
		if (sec3=='E'||sec3=='e'){
			cout<<endl<<"Ad�n�z: ";
			cin>>Name4;
		}
		else{
			for (int i=0;i<10;i++){
				Name4[i]=='\0';
			}
		}
		cout<<endl<<"��retmenin Soyad�n� Yaz�n�z: ";
		cin>>Surname2;		
		cout<<endl<<"��retmenin TC Numaras�n� Giriniz: ";
		cin>>Tc2;
		
		cout<<endl<<"��retmenin Do�um Y�l�n� Yaz�n�z(01/01/2001): ";
		cin>>Dy2;		
		cout<<endl<<"��retmenin Cep Telefon Numaras�n� Yaz�n�z: ";
		cin>>Tel2;
		
		cout<<endl<<"��retmenin Bran��n� Yaz�n�z: ";
		cin.ignore();
		cin.getline(Brans,30);
		Ogretmen ogretmen(Name3,Name4,Surname2,Tc2,Tel2,Dy2,Brans);
		e++;
		ogretmen.BilgileriGetir();
		if (e!=1){
			fprintf(fp2,"\n");
		}
		fprintf(fp2,"%d",e);
		fprintf(fp2,")");
		fprintf(fp2,"\t");
			cout<<"\nAd�n�z� De�i�tirmek �stiyor Musunuz(E/H) ? : ";
		sec3=getche();
		if (sec3=='E'||sec3=='e'){
			cout<<"\nYeni Ad�n�z� Giriniz: ";
			scanf("%s",&Name3);
			cout<<"\nYeni �kinci Ad�n�z� Girmek �stiyor Musunuz(E/H) ? : ";
			sec3=getche();
			if (sec3=='E'||sec3=='e'){
				cout<<"\nYeni �kinci Ad�n�z� Giriniz: ";
			    scanf("%s",&Name4);
			}
			else{
				for (int i=0;i<10;i++){
					Name4[i]='\0';
				}
			}
			ogretmen.setAdDegistir(Name3,Name4);
			ogretmen.GetAd();
	}
		fprintf(fp2,"Name: ");
		fprintf(fp2,"%s %s",Name3,Name4);
		fprintf(fp2,"\t");
		cout<<"\nSoyad�n�z� De�i�tirmek �stiyor Musunuz(E/H)? : ";
		sec3=getche();
		if(sec3=='E'||sec3=='e'){
			cout<<"\nYeni Soyad�n�z� Giriniz: ";
			cin>>Surname2;
			
			ogretmen.setSoyadDegistir(Surname2);
			ogretmen.GetSoyad();
		}
		fprintf(fp2,"Surname: ");
		fprintf(fp2,"%s",Surname2);
		fprintf(fp2,"\t");
		cout<<"\nTC Kimlik Numaras�n� De�i�tirmek �stiyor Musunuz(E/H)? : ";
		sec3=getche();
		if(sec3=='E'||sec3=='e'){
			cout<<"\nYeni TC Kimlik Numaras�n� Giriniz: ";
			cin>>Tc2;
			ogretmen.SetTcDegistir(Tc2);
			ogretmen.GetTc();
		}
		fprintf(fp2," TC: ");
		fprintf(fp2,"%s",Tc2);
		fprintf(fp2,"\t");
		cout<<"\nDo�um Tarihini De�i�tirmek �stiyor Musunuz(E/H) ? : ";
		sec3=getche();
		if(sec3=='E'||sec3=='e'){
			cout<<"\nYeni Do�um Tarihinizi Yaz�n�z: ";
			cin>>Dy2;
			ogretmen.SetDyDegistir(Dy2);
			ogretmen.GetDy();
			
		}
		fprintf(fp2,"Do�um Tarihi: %s\t",Dy2);
		cout<<endl<<"Cep Telefon Numaran�z� De�i�tirmek �stiyor Musunuz(E/H) ? : ";
		sec3=getche();
		if (sec3=='E'||sec3=='e'){
			cout<<endl<<"��retmenin Yeni Cep Telefon Numaras�n� Yaz�n�z: ";
			cin>>Tel2;
		    
		    ogretmen.setTelDegistir(Tel2);
		    ogretmen.GetTel();
		}
		fprintf(fp2,"Tel: ");
		fprintf(fp2,"%s",Tel2);
		fprintf(fp2,"\t");
		cout<<endl<<"Bran��n�z� De�i�tirmek �stiyor Musunuz(E/h) ? : ";
		sec3=getche();
		if (sec3=='E'||sec3=='e'){
			cout<<"\nYeni Bran��n�z : ";
			cin.ignore();
			cin.getline(Brans,30);
			
			ogretmen.SetBransDegistir(Brans);
			ogretmen.GetBrans();
		}
		fprintf(fp2,"%s","Brans: ");
		fprintf(fp2,"%s\n",Brans);
		fseek(fp2,sizeof(ogretmen),SEEK_SET);
		
}

    else if (sec==3){
    	for (int k=0;k<10;k++){
     	 	Name6[k]='\0';
		  }
		cout<<endl<<"Personelin Ad�n� Yaz�n�z: ";
		cin>>Name5;
		cout<<endl<<"�kinci Ad�n�z Var M�(E/H) ? : ";
		sec3=getche();
		if (sec3=='E'||sec3=='e'){
			cout<<endl<<"Ad�n�z: ";
			cin>>Name6;
		}
		else{
			for (int i=0;i<10;i++){
				Name6[i]=='\0';
			}
		}
		cout<<endl<<"Personel Soyad�n� Yaz�n�z: ";
		cin>>Surname3;
		
		cout<<endl<<"Personel TC Numaras�n� Giriniz: ";
		cin>>Tc3;
		cout<<endl<<"Personelin Do�um Y�l�n� Yaz�n�z(01/01/2001): ";
		cin>>Dy3;
		
		cout<<endl<<"Personel Cep Telefon Numaras�n� Yaz�n�z: ";
		cin>>Tel3;
		
		cout<<endl<<"Personelin Okuldaki G�revini Yaz�n�z: ";
		cin.ignore();
		cin.getline(Gorev,30);
		Personel personel(Name5,Name6,Surname3,Tc3,Tel3,Dy3,Gorev);
		h++;
		personel.BilgileriGetir();
			if (h!=1){
			fprintf(fp,"\n");
		}
		fprintf(fp3,"%d",h);
		fprintf(fp3,")");
		fprintf(fp3,"\t");
			cout<<"\nAd�n�z� De�i�tirmek �stiyor Musunuz(E/H) ? : ";
		sec3=getche();
		if (sec3=='E'||sec3=='e'){
			cout<<"\nYeni Ad�n�z� Giriniz: ";
			scanf("%s",&Name5);
			cout<<"\nYeni �kinci Ad�n�z� Girmek �stiyor Musunuz(E/H) ? : ";
			sec3=getche();
			if (sec3=='E'||sec3=='e'){
				cout<<"\nYeni �kinci Ad�n�z� Giriniz: ";
			    scanf("%s",&Name6);
			}
			else{
				for (int i=0;i<10;i++){
					Name6[i]='\0';
				}
			}
			personel.setAdDegistir(Name5,Name6);
			personel.GetAd();
		}
		fprintf(fp3,"Name: ");
		fprintf(fp3,"%s %s",Name5,Name6);
		fprintf(fp3,"\t");
		cout<<endl<<"\nSoyad�n�z� De�i�tirmek �stiyor Musunuz(E/H) ? : ";
		sec3=getche();
		if (sec3=='E'||sec3=='e'){
			cout<<"\nYeni Soyad�n�z: ";
			cin>>Surname3;
			personel.setSoyadDegistir(Surname3);
			personel.GetSoyad();
		}
		fprintf(fp3,"Surname: ");
		fprintf(fp3,"%s",Surname3);
		cout<<endl<<"\nTC Kimlik Numaran�z� De�i�tirmek �stiyor Musunuz(E/H) ? : ";
		sec3=getche();
		if (sec3=='E'||sec3=='e'){
			cout<<"\nTC Kimlik Numaran�z: ";
			cin>>Tc2;
			personel.SetTcDegistir(Tc2);
			personel.GetTc();
		}
		fprintf(fp3,"\t");
		fprintf(fp3," TC: ");
		fprintf(fp3,"%s",Tc3);
		fprintf(fp3,"\t");
		cout<<endl<<"Do�um Tarihinizi De�i�tirmek �stiyor Musunuz(E/H) ? : ";
		sec3=getche();
		if (sec3=='E'||sec3=='e'){
			cout<<"\nYeni Do�um Tarihiniz : ";
			cin>>Dy3;
			personel.SetDyDegistir(Dy3);
			personel.GetDy();
		}
		fprintf(fp3,"Do�um Tarihi: %s\t",Dy3);
		cout<<endl<<"Cep Telefon Numaran�z� De�i�tirmek �stiyor Musunuz(E/H) ? : ";
		sec3=getche();
		if (sec3=='E'||sec3=='e'){
			cout<<endl<<"Personelin Yeni Cep Telefon Numaras�n� Yaz�n�z: ";
			cin>>Tel3;
		    personel.setTelDegistir(Tel3);
		    personel.GetTel();
		}
		fprintf(fp3,"Tel: ");
		fprintf(fp3,"%s",Tel3);
		fprintf(fp3,"\t");
		cout<<endl<<"G�revinizi De�i�tirmek �stiyor Musunuz(E/h) ? : ";
		sec3=getche();
		if (sec3=='E'||sec3=='e'){
			cout<<"\nYeni G�reviniz: ";
			cin.ignore();
			cin.getline(Gorev,30);
			
			personel.SetGorevDegistir(Gorev);
			personel.GetGorev();
		}
		fprintf(fp3,"Gorev: ");
		fprintf(fp3,"%s\n",Gorev);
	    
		fseek(fp3,sizeof(personel),SEEK_SET);
		
}
else if (sec!=1&&sec!=2&&sec!=3){

	cout<<"\nYanl�� De�er Girdiniz...\a";
}
cout<<endl<<"Devam Etmek �stiyor Musunuz(E/H) ? : ";
sec2=getche();
if (sec2=='E'||sec2=='e'){
	cout<<endl<<"Devam Ediliyor...";
	Sleep(3000);
}
else if(sec2=='H'||sec2=='h'){
	cout<<endl<<"Yine Bekleriz...";
	fclose(fp);
	fclose(fp2);
	fclose(fp3);
	exit(3);
}
else{
	cout<<"\nYanl�� Yaz�ld�...\a";
	fclose(fp);
	fclose(fp2);
	fclose(fp3);
	abort();
}

}
}
}
