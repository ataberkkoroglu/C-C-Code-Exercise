#include<iostream>
#include<unistd.h>
#include<conio.h>

using namespace std;

int main(void){
setlocale(LC_ALL,"Turkish");
cout<<"Welcome To Program...";
char sec;
int sayi,k=0;
while(1){
int a=1;
cout<<endl<<"Write Number: ";
cin>>sayi;
for(int i=1;i<=sayi;i++){
	for (int k=1;k<=i;k++){
		printf("%d",i+a-1);
		a++;
		if (k==i){
			printf("\n");
			a--;
			break;
			}
		}
	}
while(1){
cout<<endl<<"Would You Like To Contunie(Y/N) ? : ";
sec=getche();
if(sec=='Y'||sec=='y'){
	sleep(3);
	break;
}
else if(sec=='N'|| sec=='n'){
	cout<<endl<<"Have a Good Days...";
	exit(1);
}
else{
	cout<<endl<<"wrong Input...\a";
}
}
}
}

