#include <iostream>
using namespace std;

int main(){
 setlocale(LC_ALL,"Turkish");
 cout<<"Programa Ho�geldiniz...";
 int n,toplam,r,indeks,o;
 cout<<endl<<"Ka� Tane Say� Girmek �stiyorsunuz: ";
 cin>>n;
 int sayi1[n],sayi2[n];
 
 for(int i=0;i<n;i++){
 	cout<<endl<<i+1<<". "<<"Say�y� Giriniz: ";
 	cin>>sayi1[i];
	if(sayi1[i]==sayi1[i+1]){
		i--;
	}	
 }

memcpy(sayi2,sayi1,n);
//cout<<endl<<sayi2[1];
int temp;
if(n==1){
	cout<<"En K���k Say�: "<<sayi1[0]<<" 1.s�radad�r.";
}

else if(n<=0){
  return 0;
}
else {	
	 for (int e=0;e<n-1;e++){
	   if(sayi1[e+1]<sayi1[e]){
	   	    temp=sayi1[e];
	   	    sayi1[e]=sayi1[e+1];
	   	    sayi1[e+1]=temp;
            o++;
}
}
 for (int e=0;e<n-1;e++){
	   if(sayi1[e+1]<sayi1[e]){
	   	    temp=sayi1[e];
	   	    sayi1[e]=sayi1[e+1];
	   	    sayi1[e+1]=temp;
            o++;
}
}
 for (int e=0;e<n-1;e++){
	   if(sayi1[e+1]<sayi1[e]){
	   	    temp=sayi1[e];
	   	    sayi1[e]=sayi1[e+1];
	   	    sayi1[e+1]=temp;
            o++;
}
}
 for (int e=0;e<n-1;e++){
	   if(sayi1[e+1]<sayi1[e]){
	   	    temp=sayi1[e];
	   	    sayi1[e]=sayi1[e+1];
	   	    sayi1[e+1]=temp;
            o++;
}
}
    for(int i=0;i<n;i++){
     	cout<<sayi1[i]<<" - ";
     	
	 }
int k=0;	 
while(k<n){
 if (k==n){
 	break;
 }
else{
 if((sayi2[k]==sayi1[0])) {
 cout<<endl<<"Dizideki En K���k Say� "<<k<<"."<<" S�rada Bulunmaktad�r."<<endl;
 break;
}
else if((sayi2[k]!=sayi1[0])==1){
	k++;
}
}
}

}

return 0;
}



