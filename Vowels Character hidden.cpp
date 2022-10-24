#include<iostream>
#include<unistd.h>
#include<conio.h>
#include<cstring>
using namespace std;
char Function(char a[],int b){
	for(int i=0;i<=b;i++){
		if (a[i]=='\0'){
			break;
		}
		if (a[i]=='A'||a[i]=='a'|| a[i]=='E'|| a[i]=='e'||a[i]=='I'||a[i]=='i'|| a[i]=='o'|| a[i]=='O'||a[i]=='U'||a[i]=='u'){
		 a[i]='*';
		}
		else if ((a[i]>64 && a[i]<91)||(a[i]>96 && a[i]<123)){	
		}
		else if (a[i]!=' '){
			a[i]='*';
		}
	
		
	}
	for (int k=0;k<=b;k++){
		if (a[k]=='\0'){
			break;
		}
		
		if (a[k]==' '){
			printf(" ");
		}
		printf("%c",a[k]);
	
	}
}

int main(void){
	setlocale(LC_ALL,"Turkish");
	printf("Welcome To Program");
	char sec;
	while(1){
	char Text[1000];
	printf("\nPlease Don't Use 'ð' or 'Ð' in Your Text...\a");
	printf("\nWrite Your Text in Below: ");
	cin.ignore();
	cin.getline(Text,1000);
	
	Function(Text,1000);
	while(1){
    printf("\nWould You Like To Contunie(E/H) ? : ");
    sec=getche();
    if (sec=='E'||sec=='e'){
    	sleep(3);
    	break;
	}
	else if (sec=='H'||sec=='h'){
		printf("\nHave a Good Days...");
    	exit(1);
	}
	else{
		printf("\nWrong Input...\a");
	}
}
}
}
