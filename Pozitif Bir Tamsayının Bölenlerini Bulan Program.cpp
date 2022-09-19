#include<iostream>
using namespace std;

main(){
	setlocale(LC_ALL,"Turkish");
	cout<<"Pozitif Bir Tamsayýnýn Bölenlerini Bulan Programa Hoþgeldiniz...";
	int x,e;
	while (e<=3){
	
	cout<<endl<<"Girmek Ýstediðiniz Pozitif Tamsayýyý Yazýnýz= ";
	cin>>x;
	if(x<=0){
		cout<<"Girdiðiniz Deðeri Kontrol Edip Tekrar Giriniz..."<<endl;
		e++;
	}
	else {
		for (int i=1;i<=x;i++){
			if (x%i==0){
				cout<<"X'nin Tam Sayý Böleni: "<<i<<endl;
			}
			
		}
	    int cikis;
	    cout<<"Programdan Çýkmak için'0' ye Programa Devam Etmek için '1' Giriniz: ";
	    cin>>cikis;
	    if (cikis==0){
	    	cout<<"Program Sonlandýrýlýyor..."<<endl;
	    	cout<<"Yine Bekleriz...";
	    	break;
		}
		else if(cikis==1){
			cout<<"Programa Devam Ediliyor..."<<endl;
		}
		
	
	}

}
}


