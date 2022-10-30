#include<stdio.h>

int main(void){
	printf("Welcome To Program...");
	int a[3],b,d=0;
	for (int i=100;i<1000;i++){
		b=i;
		d=0;
		for(int k=0;k<3;k++){
			a[k]=b%10;
	         b /=10;
		}
		for (int e=0;e<1;e++){
			if (a[e]==a[e+1]){
				d++;
				
			}
			if (a[e+1]==a[e+2]){
				d++;
				//printf("\n%d",d);
				
			}
			if (a[e]==a[e+2]){
				d++;
				
			}
		}
		if (d==0){
			printf("\n%d",i);
		}
		}

}
