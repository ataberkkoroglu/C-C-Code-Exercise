#include <iostream>
using namespace std;

main(){
setlocale(LC_ALL,"Turkish");
int i=0;
printf("Beden Kitlesini Bulma Program�na Ho�geldiniz...\n");
char isim[10];
char soyisim[10];
int yas;
cout<<"�sminiz: ";
cin.getline(isim,10);
cout<<"Soyisim: ";
cin>>soyisim;
cout<<"Ya��n�z: ";
cin>>yas;
float kilo;
float boy;
double beden_kitle_endeksi;
int sec;
while (i<=3){
cout<<"Kilonuzu Kilogram Cinsinden Giriniz= ";
cin>>kilo;
cout<<"Boyunuzu Metre Cinsinden Giriniz= ";
cin >>boy;
if ((boy>1.00 &&boy<2.70) && (kilo>0.00&&kilo<250.00)){

beden_kitle_endeksi=kilo/(boy*boy);
printf("'0-18':Zay�f\n'18-25'=Normal\n'25-30':Fazla Kilolu\n'30-35':1.Dereceden Obez\n'35-40':2.Dereceden Obez\n'beden_kitle_endeksi>40':3.Dereceden Obez");
if (beden_kitle_endeksi>0&&beden_kitle_endeksi<18){
	sec=1;
}
else if (beden_kitle_endeksi>18&&beden_kitle_endeksi<25){
	sec=2;
}
else if (beden_kitle_endeksi>25&&beden_kitle_endeksi<30){
	sec=3;
}
else if (beden_kitle_endeksi>30&&beden_kitle_endeksi<35){
	sec=4;
}
else if (beden_kitle_endeksi>35&&beden_kitle_endeksi<40){
	sec=5;
}
else if (beden_kitle_endeksi>=40){
	sec=6;
}



switch(sec){
	case 1:
		printf("\nYa�� %d olan %s %s'nin Beden Kitle Endeksi:%f =Zay�f ",yas,isim,soyisim,beden_kitle_endeksi);	
		break;
		break;
	
	case 2:
		printf("\nYa�� %d olan %s %s'nin Beden Kitle Endeksi:%f = Normal ",yas,isim,soyisim,beden_kitle_endeksi);	
		break;
		break;
	
	case 3:
		printf("\nYa�� %d olan %s %s'nin Beden Kitle Endeksi:%f = Fazla Kilolu ",yas,isim,soyisim,beden_kitle_endeksi);	
		break;
		break;
	
	case 4:
		printf("\nYa�� %d olan %s %s'nin Beden Kitle Endeksi:%f = 1.Dereceden Obez ",yas,isim,soyisim,beden_kitle_endeksi);	
		break;
		break;
	
	case 5:
		printf("\nYa�� %d olan %s %s'nin Beden Kitle Endeksi:%f =2.Dereceden Obez ",yas,isim,soyisim,beden_kitle_endeksi);	
		break;
		break;
	
	case 6:
		printf("\nYa�� %d olan %s %s'nin Beden Kitle Endeksi:%f = 3.Dereceden Obez ",yas,isim,soyisim,beden_kitle_endeksi);	
		break;
		break;
	
	default :
		cout<<"\nYanl�� De�er Girdiniz..."<<endl<<"De�erleri Tekrar Giriniz..."<<endl;
		i++;
		break;
	}
	int a=0;
	while (a>-2){
	
	int secim;
	cout<<endl<<"Devam Etmek ��in '1'i Devam Etmemek ��in'0'a bas�n�z= ";
	cin>>secim;
	if (secim==1){
		printf("\nDevam Ediyorsunuz...\n");
		break;
	}
	else if(secim==0){
		printf("\nProgram Sonland�r�l�yor...\n");
		printf("Yine Bekleriz...");
		i=4;
		break;
		
		
	}
	else {
		printf("Yanl�� De�er Girdiniz...\n");
		printf("Tekrar Giriniz...\n");
		a++;
	}
}
}
else {
	printf("\nGirdiginiz De�erleri Kontrol Edip Tekrar Giriniz...\n");
}
}
}
