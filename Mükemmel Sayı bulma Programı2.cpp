#include <iostream>
using namespace std;

int main(void){
setlocale(LC_ALL,"Turkish");
cout<<"1-500 Aras� M�kemmel Say� Bulma Program�na Ho�geldiniz...\n";
int toplam;
toplam=0;
int e;
cout<<"Say�y� Giriniz: ";
cin>>e;
if(e<500 &&e>0){
    for (int i=1;i<=500;i++){
   	 if(e%i==0 && i<e){
      toplam +=i;
      if(toplam==e){
       cout<<endl<<e<<" Say�s� M�kemmel Say�d�r.";
       break;
       
}
}
}


}

}


