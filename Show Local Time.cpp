#include<stdio.h>
#include<time.h>


int main(void){
	
	printf("Welcome To Hour Program...\n");
	time_t time_1970;
	time_1970=time('\0');
	printf("Yerel Zaman: %s",ctime(&time_1970));
}
