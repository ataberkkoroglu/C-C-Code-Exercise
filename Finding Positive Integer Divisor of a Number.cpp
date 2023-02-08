#include<stdio.h>
#include<time.h>
#include<conio.h>
#include<unistd.h>
#include<math.h>
typedef int n;

n main(void){
	time_t Time;
	n num;char ch;
	Time=time('\0');
	printf("Welcome To Program...\n%s",ctime(&Time));
	while(1){
		while (1){
		printf("\nWrite a Number: ");scanf("%d",&num);
		if (num<0){
			num=abs(num);              
			break;
		}
		else if (num>1){
			n cluster[num];
			break;
		}
		else{
			printf("\nInvalid Number...\nPlease Write Positive Number than one...\a");
		}
	}
	printf("\n-----Positive Integer Divisor of %d----\n",num);
	for(int i=1;i<=num;i++){
		if (num%i==0){
			
			printf("\n%d",i);
			
		}
	}
	while(1){
		printf("\nWould You Like To Contunie (Y/N) ? : ");ch=getche();
		if (ch=='Y' || ch=='y'){
			sleep(2);break;
		}
		else if (ch=='N' || ch=='n'){
			printf("\nHave a Good Days...");
			exit(1);
		}
		else{
			printf("\nWrong Character...\nPlease Write Your Answer Again...\a");
		}
	}

	}

}
