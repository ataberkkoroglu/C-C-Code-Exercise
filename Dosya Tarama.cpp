#include<iostream>
#include<conio.h>
#include<cstring>
#include<stdlib.h>
using namespace std;

int main(void){
	setlocale(LC_ALL,"Turkish");
	cout<<"Programa Hoþgeldiniz...";
	char Ad[20];
	int id,sayac=0;
	char Name[20],Surname[10];
	FILE *fp;
	fp=fopen("Staff.txt","r");
	if (fp=='\0'){
		printf("\nDosya Bulunamadý...\a");
	}
	else{
	cout<<"\nPersonelin Adýný Yazýnýz: ";
	cin>>Ad;
	
		while(fscanf(fp,"%d %s %s",&id,&Name,&Surname) !=EOF){
			if (strcmp(Name,Ad)==0){
				printf("\nPersonelin Id: %d\nPersonelin Adý: %s\nPersonelin Soyadý: %s\n",id,Name,Surname);
				sayac++;
		}
	}
	if(sayac==0){
		printf("\nKayýt Bulunamadý...\a");
	}
}
}
