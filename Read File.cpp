#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void){
	time_t Time;
	FILE *fp;
	Time=time(NULL);
	printf("welcome To Program...\n%s",ctime(&Time));
	fp=fopen("C:/users/asus/Desktop/matlab1notlarý.txt","r");
	char x[10000];
	fread(x,10000,1,fp);
	printf("\n%s",x);
}
