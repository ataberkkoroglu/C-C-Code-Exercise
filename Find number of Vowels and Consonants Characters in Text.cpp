#include<stdio.h>
#include<locale.h>
#include<conio.h>
#include<unistd.h>
#include<stdlib.h>
int Count(char a[],int b){
	int vowels=0,constant(0);
	int unknown=0;
	for(int i=0;i<300;i++){
		if (a[i]=='e'||a[i]=='E'|| a[i]=='A'|| a[i]=='a'|| a[i]=='I' ||a[i]=='i'|| a[i]=='u'||a[i]=='U'|| a[i]=='ý'|| a[i]=='O'||a[i]=='o'||a[i]=='Ö'||a[i]=='Ý' || a[i]=='ö'||a[i]=='Ü' ||a[i]=='ü'){
			vowels++;
		}
		else if (a[i]=='\0'){
			break;
		}
		else if ((a[i]>64 && a[i]<91)||(a[i]>96 && a[i]<123)){
			constant++;
		}
		else if (a[i]==' '){
			
		}
		else{
			unknown++;
		}
	}
	printf("\nVowels: %d\nConstant: %d\nUnknown: %d",vowels,constant,unknown);
}
int main(void){
	
	setlocale(LC_ALL,"Turkish");
	printf("Welcome To Program...\n");
	char text[300],ch;
	while(1){
	printf("\nWrite Your Text ? : ");
	gets(text);
	Count(text,300);
	while(1){
	printf("\nWould You Like To Continue To Program ? : ");
	ch=getche();
	if(ch=='E'||ch=='e'){
		printf("\nProgram Is Working...");
		sleep(3);
		break;
	}
	else if (ch=='H'||ch=='h'){
		printf("\nHave a Good Days...");
		exit(1);
	}
	else{
		printf("\nBe Written Wrong...\a");
		
	}
}
}
}
