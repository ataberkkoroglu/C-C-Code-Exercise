#include<iostream>

main(){
setlocale(LC_ALL,"Turkish");
int n;
float toplam;
toplam=0;
printf("Programa Ho�geldiniz...\n");
printf("Girmek �stedi�iniz Say�y� Giriniz: ");
scanf("%d",&n);
for(int i=1;i<=n;i++){
	toplam +=1/float(i);
}
std::cout<<toplam;
}
