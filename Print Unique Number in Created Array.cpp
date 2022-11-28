#include<stdio.h>
#include<unistd.h>
#include<conio.h>
#include<math.h>

int main(void){
	printf("Welcome To Program...");
	int n,counter=0;
	char ch;
	while(1){
	while(1){
		printf("\nWould You Like To Create Size Of Array ? : ");
	    scanf("%d",&n);
	    if (n==1 || n==0 ||n==-1){
	    	printf("\nWrite Higher Number Than Old...\a");
		}
		else{
		   n=abs(n);
		   break;
		}
	}
	int Array[n];
	for (int i=0;i<n;i++){
		printf("\nWrite %d.Number: ",i+1);
		scanf("%d",&Array[i]);
	}
	for (int k=0;k<n;k++){
		counter=0;
		for(int e=0;e<n;e++){
			if (Array[k]==Array[e] and k!=e){
				counter +=1;
				break;
			}
		}
		if (counter==0){
			printf("%d\n",Array[k]);
		}
	}
	while(1){
	printf("Would You Like To Contunie (Y/N) ? : ");
	ch=getche();
	if (ch=='Y' or ch=='y'){
		sleep(2);
		break;
	}
	else if (ch=='N' or ch=='n'){
		printf("\nHave a Good Days...");
		exit(1);
	}
	else{
		printf("\nWrong Input...\a");
	}
}
}
}
