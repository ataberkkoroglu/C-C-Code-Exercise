#include<iostream>
using namespace std;

main(){
	setlocale(LC_ALL,"Turkish");
	cout<<"Pozitif Bir Tamsay�n�n B�lenlerini Bulan Programa Ho�geldiniz...";
	int x,e;
	while (e<=3){
	
	cout<<endl<<"Girmek �stedi�iniz Pozitif Tamsay�y� Yaz�n�z= ";
	cin>>x;
	if(x<=0){
		cout<<"Girdi�iniz De�eri Kontrol Edip Tekrar Giriniz..."<<endl;
		e++;
	}
	else {
		for (int i=1;i<=x;i++){
			if (x%i==0){
				cout<<"X'nin Tam Say� B�leni: "<<i<<endl;
			}
			
		}
	    int cikis;
	    cout<<"Programdan ��kmak i�in'0' ye Programa Devam Etmek i�in '1' Giriniz: ";
	    cin>>cikis;
	    if (cikis==0){
	    	cout<<"Program Sonland�r�l�yor..."<<endl;
	    	cout<<"Yine Bekleriz...";
	    	break;
		}
		else if(cikis==1){
			cout<<"Programa Devam Ediliyor..."<<endl;
		}
		
	
	}

}
}


