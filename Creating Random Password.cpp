#include<iostream>
#include<conio.h>
#include<string.h>
#include<Windows.h>
#include<time.h>
#include<stdlib.h>


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
    
      return (rand() % (int)(((sayi) + 1) - (0)) + (0));
	
}
 ~Program(){
 	
 }
};


int main(void){
	time_t Time;
	Time=time(0);
	int e,counter,sc;
	char a[]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','R','S','T','U','X','W','V','Y','Z'};
	char b[sizeof(a)]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','r','s','t','u','x','w','v','y','z'};
	char n[10]={'1','2','3','4','5','6','7','8','9','0'};
	char p[4]={'*','^','+','-'},ch;
	printf("\e[1mWelcome To Program Which Creates Strong Password\n%s",ctime(&Time));
	
	while(1){
		
		counter=0;
		while (1){
		printf("\n\e[1;36mHow Many Character Do You Want To Create For Your Password ? :\e[0m ");
	    scanf("%d",&e);
	    if (e<8 || e>15){
	    	printf("\n\033[1;4;31mYour Password's Length Must Be The Least Eight Character,The Most 15 Character...\a\e[0m");
		}
		else{
			break;
		}
		
	}
	printf("\n%d",e);
	char password[e];
	srand(time(NULL));
	while (counter<e){
	  int A,B,N,P;
	  Program program(3);
	  sc=program.Random();
	  if (sc==0){
	  	
	  	Program program(strlen(a));
		A=program.Random();
	  	password[counter]=a[A];
	  	
}
	  else if (sc==1){
		Program program(strlen(b));
		B=program.Random();	  	
	  	password[counter]=b[B];  
	  	
}
	  else if (sc==2){
	  	Program program(strlen(n));
		N=program.Random();
	  	password[counter]=n[N]; 
	  	
}
	  else if (sc==3){
	  	Program program(strlen(p));
		P=program.Random();
	  
	  	password[counter]=p[P];
	  	
}
	  counter++;
	}
	printf("\n\e[1;35mYour Password:\e[1;32m%s",password);
	
	while (1){
		printf("\n\e[1;34mWould You Like To Contunie(Y/N) ? :\033[0m ");
		ch=getche();
		if (ch=='Y' || ch=='y'){
			Sleep(2000);
			break;
		}
		else if (ch=='N' || ch=='n'){
			Time=time(NULL);
			printf("\n\e[1;32mHave a Good Days...\n%s\e[0m",ctime(&Time));
			exit(1);
		}
		else{
			printf("\n\e[1;4;31mWrong Character...\a\nPlease Write Again...\e[0m\n");
		}
	}
	
}
}
