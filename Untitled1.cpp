#include <iostream>
#include<cstring>
using namespace std;
struct ogrenci{
	char ad[21];
	char soyad[10];
	int numara;
	int puan;
	int puan2;
	double ortalama;
};
int main(){
	setlocale(LC_ALL,"Turkish");
	cout<<"Programa Hoþgeldiniz...\n";
	char arama[20];
	struct ogrenci student;
	int bayrak=0;
	FILE *fp;
	
	fp=fopen("gecenler.txt","r");
	if(fp=='\0'){
		printf("Dosya Bulunamadý.");
}   
   else{
    printf("Kimi Bulmak Ýstiyorsunuz: ");
    scanf("%s",&arama);
      while (fscanf(fp,"%s %s %d %d %d %f",student.ad,student.soyad,&student.numara,&student.puan,&student.puan2,&student.ortalama)!=EOF){
      	
      	if (strcmp(student.ad,arama)==0){
      		printf("\n%s %s %d %d %d %lf",student.ad,student.soyad,student.numara,student.puan,student.puan2,student.ortalama);
      		bayrak=1;
		  }
	  
	 
}
 if(bayrak==0){
	  	printf("\nAradýðýnýz Kiþi Bulunamadý.");
}
}
return 0;
}

