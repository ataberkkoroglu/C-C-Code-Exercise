#include<stdio.h>
#include<unistd.h>
#include<conio.h>
#include<time.h>
#include<math.h>

int main(){
 time_t Time;
 Time=time(NULL);
printf("Welcome To Program...\n%s",ctime(&Time));
while(1){
  char sc;
    int number = 0, StepValue = 0,  MultipleOfTwo= 1, sum = 0;
    
    printf("\nWrite a Number at Binary System: ");
    scanf("%d", &number);
    
    while(number > 0)
    {
        StepValue = number % 10;
        number /= 10; // Sol basamaga kay
        sum += MultipleOfTwo * StepValue;
        MultipleOfTwo *= 2;
    }

    printf("Equal To Decimal Number of Your Number: %d\n",sum);
    
	while(1){
		
	 printf("\nWould You Like To Contunie(Y/N) ? : ");
	 sc=getche();
	 if (sc=='Y' or sc=='y'){
	 	sleep(2);
	    break;
	 }
	 else if (sc=='n' or sc=='N'){
	 	printf("\nHave a Good Days...");
	 	return 0;
	 	exit(1);
	 }
	 else{
	 	printf("\nWrong Input...\a");
	 }
	}
	}
}


