#include<stdio.h>
#include<math.h>
#include<locale.h>
#include<time.h>
#include<conio.h>
inline double Areas(float a,float b,float c){
    float u=(a+b+c)/2;
    double process=(sqrt(u*((u-a)*(u-b)*(u-c))));
    return process;
}

int main(void){
    time_t Time;
    Time=time(0);
    struct tm *Tm=localtime(&Time);
    printf("Welcome To Program...\n%d : %d : %d  %d.%d.%d",Tm->tm_hour,Tm->tm_min,Tm->tm_sec,Tm->tm_mday,Tm->tm_mon+1,Tm->tm_year+1900);
    float a,b,c;char ch;
    while(1){
    printf("\nWrite edge length of Triangle with respectively(5 15 25): ");scanf("%f %f %f",&a,&b,&c);
    printf("\nAreas Of Triangle: %.2lf\nEnvironment Of Triangle: %f",Areas(a,b,c),a+b+c);
    while(1){
     printf("\nWould You Like To Contunie(Y/N) ? : ");ch=getche();
	 if (ch=='Y' || ch=='y'){
	    break;
	 }
	 else if (ch=='n' || ch=='N'){
        Time=time(0);
        struct tm *Tm=localtime(&Time);
	 	printf("\nHave a Good Days...\n%d : %d : %d  %d.%d.%d",Tm->tm_hour,Tm->tm_min,Tm->tm_sec,Tm->tm_mday,Tm->tm_mon+1,Tm->tm_year+1900);exit(1);
    }
    else{
        printf("\nWrong Character...\nPlease Write Again...");
    }
    }
}
    }
    