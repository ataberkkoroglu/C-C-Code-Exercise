#include<stdio.h>
#include<locale.h>
#include<unistd.h>
#include<conio.h>
#include<math.h>
#include<string.h>
inline void Pyramid(int a){
char space=' ';
for (int i=0;i<=a;i++){
	for(int j=a-i;0<j;j--){
		printf("%c",space);
	}
	for(int k=0;k<i;k++ ){
	printf(" *");
}

printf("\n");
}
}
int main(void){
	setlocale(LC_ALL,"Turkish");
	printf("Welcome To Program...");
	char ch;
	while(1){
	int sayi;
	while(1){
	printf("\nWrite Your Number How Many Line Pyramid Has : ");
	scanf("%d",&sayi);
	if (sayi>0 &&sayi<=50 ){
	   Pyramid(sayi);
	   break;
}
	else{
		if (sayi>=-50 &&sayi<0){
			sayi=abs(sayi);
			Pyramid(sayi);
			break;
		}
		else{
			printf("\nWrong Input...\a");
		}
	}
}
	while(1){

	printf("\nWould You Like To Contunie(Y/N) ? : ");
	ch=getche();
	if (ch=='Y'||ch=='y'){
		sleep(2);
		break;
	}
	else if (ch=='n'||ch=='N'){
		printf("\nHave a Good Days...");
		exit(1);
	}
	else{
		printf("\nWrong Input...\a");
	}
}
}
}
