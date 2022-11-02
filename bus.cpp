#include<stdio.h>
#include<locale.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
#define randnum(min,max) ((rand() % (int) (((max) + 1) - (min))) + (min))
main(){
	printf("Welcome To Program");
	int bus,person,i=0,a;
	char sec;
    srand(time(NULL));
    a=randnum(1,9);
    while(1){
    	
	    person=randnum(1,10);
	    i=0;
	while(1){
     i++;
     if (a==person){
        printf("\nThe Bus Arrived Stop That You become in %d.Stop ",a);
        break;
     }
     else if (a<person){
        printf("\nThe Bus Is in %d. Stop",a);
        _sleep(randnum(1,5));
        a +=i;
        
     }
     else{
        printf("\nMissed The Bus");
        break;
     }

}
while(1){
printf("\nWould You Like To Contunie? : ");
sec=getche();
if (sec=='E'||sec=='e'){
    _sleep(3);
    
    break;
}
else if (sec=='H'||sec=='h'){
    printf("\nHave a Good Days...");
    exit(3);
}
else{
    printf("\nWrong Character...\a");
}
}
}
}

