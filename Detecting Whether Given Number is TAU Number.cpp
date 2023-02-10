#include<stdio.h>
#include<time.h>
#include<conio.h>
#include<stdlib.h>
#include<unistd.h>

inline int Program(int a){
	int counter=0;
	for(int i=1;i<=a;i++){
		if(a%i==0){
			counter++;
		}
	}
	return a%counter==0 ? 1:0;
}
int main() {
	time_t Time;
	Time = time('\0');
	printf("Welcome To Program Which Is Detecting Whether Given Number Is TAU Number...\n%s", ctime(&Time));
	int num,counter=0;
	char ch;
	while(1){
		printf("\nWrite a Number: ");scanf("%d",&num);
	    if (Program(num)){
	    	printf("\n%d is TAU Number.",num);
		}
		else{
			printf("\n%d isn't TAU Number.",num);
		}
		while(1){
			printf("\nWould You Like To Contunie (Y/N) ? : ");ch=getche();
			if (ch=='Y' || ch=='y'){
				sleep(2);
				break;
			}
			else if (ch=='N' || ch=='n'){
				printf("\nHave a Good Days...");exit(1);
			}
			else{
				printf("\nWrong Character...\nPlease Write Again...\a");
			}
		}
	}
    
	
}

