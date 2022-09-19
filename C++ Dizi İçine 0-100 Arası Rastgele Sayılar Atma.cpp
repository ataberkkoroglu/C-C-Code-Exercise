#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<time.h>
#define randnum(min,max) ((rand() % (int) (((max) + 1) - (min))) + (min))
int main(void){
	setlocale(LC_ALL,"Turkish");
	int sec;
	int sayi[100];
	srand(time(NULL));
	for(int i=0;i<100;i++){
		sayi[i]=randnum(0,100);
		
		}
	for (int e=0;e<100;e++){
		printf("\n%d",sayi[e]);
	}
	
	}

