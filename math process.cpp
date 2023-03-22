#include<stdio.h>
#include<math.h>
#include<time.h>
#include<conio.h>
#include<Windows.h>
template<typename T>

T Program(T a){
	printf("\nSquare of Number: %.2f\nCubic of Number: %.2f ",pow(a,2),pow(a,3));
	printf("\nSquare Root of Number: %.2f\nCubic Root of Number: %.2f",sqrt(a),cbrt(a));
	
}

int main(){
	double num;
	char ch;
	time_t Time;
	Time=time(NULL);
	printf("Welcome To Program...\n%s",ctime(&Time));
  while(1){
	while(1){
	  printf("\nWrite a Number: ");scanf("%lf",&num);
	  if (num<0){
		num=abs(num);
	}
	Program(num);
	while(1){
		printf("\nWould You Like To Contunie(Y/N) ? : ");ch=getche();
		if (ch=='Y' || ch=='y'){
			Sleep(2000);
			break;
		}
		else if (ch=='N' || ch=='n'){
			printf("\nHave a Good Days...");
			exit(1);
		}
		else{
			printf("\nWrong Character...\nPlease Write Again...\a");
		}
	}
	}
	
}
}
