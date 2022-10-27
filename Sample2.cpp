#include<iostream>
#include<unistd.h>
#include<conio.h>
using namespace std;
int main(void){
	setlocale(LC_ALL,"Turkish");
	printf("Welcome To Program...");
	char sec;
	int sayi;
	while(1){
		cout<<endl<<"Write Number: ";
		cin>>sayi;
		for(int i=1;i<=sayi;i++){
			
			for(int k=0;k<i;k++){
				cout<<i-k;
			}
			cout<<endl;	
	}
	while(1){
		cout<<endl<<"Would You Like To Contunie(Y/N) ? : ";
		sec=getche();
		if(sec=='Y'||sec=='y'){
			sleep(3);
			break;
		}
		else if(sec=='N'||sec=='n'){
			printf("\nHave a Good Days...");
			exit(1);
		}
		else{
			cout<<endl<<"Wrong Input...\a";
		}
	}
}
}
