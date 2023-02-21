#include <stdio.h>
#include<time.h>
#include <stdlib.h>
#include<conio.h>
int main() {
    time_t Time;
    Time=time(0);
    struct tm *Tm=localtime(&Time);
    printf("Welcome To Program...\n%d : %d : %d %d.%d.%d",Tm->tm_hour,Tm->tm_min,Tm->tm_sec,Tm->tm_mday,Tm->tm_mon+1,Tm->tm_year+1900);
    int n,total;char ch;
     while(1){
       total=0;
       printf("\nWrite a Number: ");scanf("%d",&n);
     int *array;
     array=(int *) calloc(n,sizeof(int));

     for(int i=0;i<n;i++){
        printf("Write %d. Number: ",i+1);
         scanf("%d",&array[i]);
         total +=array[i];
     }
    printf("\nSum Of The Array: %d",total);
    
    while(1){
       printf("\nWould You Like To Contunie(Y/N) ? : ");
	     ch=getche();
	 if (ch=='Y' || ch=='y'){
	    break;
	 }
	 else if (ch=='n' || ch=='N'){
        Time=time(0);
        struct tm *Tm=localtime(&Time);
        free(array);
	 	printf("\nHave a Good Days...\n%d : %d : %d %d.%d.%d",Tm->tm_hour,Tm->tm_min,Tm->tm_sec,Tm->tm_mday,Tm->tm_mon+1,Tm->tm_year+1900);_Exit(1);
    }
    else{printf("\nWrong Character...\nPlease Write Again...");}
     }
}return 0;
}