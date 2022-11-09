#include<stdio.h>
#include<time.h>


int main(void){
	setlocale(LC_ALL,"Turkish");
	printf("Welcome To Hour Program...\n");
	time_t time_1970;
	time_1970=time('\0');
	printf("Yerel Zaman: %s",ctime(&time_1970));
}
