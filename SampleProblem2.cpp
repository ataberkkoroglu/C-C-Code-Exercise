#include<stdio.h>
#include<locale.h>
#include<math.h>
#include<conio.h>
#include<unistd.h>

typedef int n;
void Program(n money){
	n a,b,c,d,e;
	a=money/100;
	money -=100*a;
	b=money/50;
	money -=50*b;
	c=money/20;
	money -=20*c;
	d=money/10;
	money -=10*d;
	if (money!=0){
		printf("There is the least note of 10.\a");
	}
	else{
		printf("100'lük Banknot: %d\n50'lik Banknot: %d\n20'lik Banknot: %d\n10'luk Banknot: %d\n",a,b,c,d);
	}
	
}


n main(void){
	setlocale(LC_ALL,"Turkish");
	n money;char ch;
	while(1){
		
	while(1){
		printf("Write Value Of Money: ");scanf("%d",&money);
		if(money==0){
			printf("\nInvalid Number...\a");
		}
		else if (money<0){
			money=abs(money);
			break;
		}
		else{
			break;
		}
	}
	Program(money);
	while(1){
	 printf("\nWould You Like To Contunie (Y/N) ? : ")	;
	 ch=getche();
	 if (ch=='Y' || ch=='y'){
	 	sleep(2);printf("\n");
	 	break;
	 }
	 else if (ch=='N' || ch=='n'){
	 	printf("\nHave a Good Days...");
	 	exit(1);
	 }
	 else{
	 	printf("\nWrong Character...a");
	 }
	}
}
}
