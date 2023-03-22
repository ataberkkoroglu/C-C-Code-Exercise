#include<iostream>
#include<conio.h>
#include<string.h>
#include<Windows.h>
#include<time.h>
#include<stdlib.h>

int Random(int max){
   srand(time(NULL)); 
   return (rand() % (int)(((max) + 1) - (0)) + (0));
}
using namespace std;
class Program{
	int sayi;
	public:
	Program(int sayi){
		this->sayi=sayi;
		
	    
	}
/*	int get(){
       return sayi;
}*/
    int Random(){
    srand(time(NULL)); 
      return (rand() % (int)(((sayi) + 1) - (0)) + (0));
}
/* ~Program(){
 	cout<<'\t';
 }*/
};


int main(void){
	time_t Time;
	Time=time(0);
	int e,counter,sc;
	char a[]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','R','S','T','U','X','W','V','Y','Z'};
	char b[sizeof(a)]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','r','s','t','u','x','w','v','y','z'};
	char n[10]={'1','2','3','4','5','6','7','8','9','0'};
	char p[8]={'*','?','^','%','&','-','_','+'},ch;
	printf("Welcome To Program Which Creates Strong Password\n%s",ctime(&Time));
	
	while(1){
		
		counter=0;
		while (1){
		printf("\nHow Many Character Do You Want To Create For Your Password ? : ");
	    scanf("%d",&e);
	    if (e<8 || e>15){
	    	printf("\nYour Password's Length Must Be The Least Eight Character,The Most 15 Character...\a");
		}
		else{
			break;
		}
		
	}
	char password[e];
	while (counter<e){
	  int A,B,N,P;
	  Program program(3);
	  sc=program.Random();
	  if (sc==0){
	  	srand(time(NULL));
	  	A=Random(strlen(a));
	  	password[counter]=a[A];
	  	
}
	  else if (sc==1){
		B=Random(strlen(b));	  	
	  	password[counter]=b[B];  
	  	
}
	  else if (sc==2){
	  	N=Random(strlen(n));
	  	password[counter]=n[N]; 
	  	
}
	  else if (sc==3){
	  	
	  	P=Random(strlen(p));
	  	password[counter]=p[P];
	  	
}
	  counter++;
	}
	printf("\nYour Password: %s",password);
	
	while (1){
		printf("\nWould You Like To Contunie(Y/N) ? : ");
		ch=getche();
		if (ch=='Y' || ch=='y'){
			Sleep(2000);
			break;
		}
		else if (ch=='N' || ch=='n'){
			printf("\nHave a Good Days...");
			exit(1);
		}
		else{
			printf("\nWrong Character...\a\nPlease Write Again...");
		}
	}
	
}
}
