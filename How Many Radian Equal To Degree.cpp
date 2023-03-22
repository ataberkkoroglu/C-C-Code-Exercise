#include<stdio.h>
#include<locale.h>
#include<conio.h>
#include<Windows.h>
#define pi 3.14
template<typename t>

t Convert(t sayi){
	t angle=(pi/180)*sayi;
	return angle/pi;
}

int main(void){
	setlocale(LC_ALL,"Turkish");
	printf("Welcome To Program...");
	float result;
	float sayi;
	char sec,ch;
    while(1){
     printf("\nWrite Your Degree For Transforming Degree : ");
     scanf("%f",&sayi);
     result=Convert(sayi);
     printf("\nValue Of %.2f Radian:%.4lf",result,result*pi);
while(1){
	
printf("\nWould You Like To Contunie Program (Y/N) ? : ");
ch=getche();
if (ch=='Y'|| ch=='y'){
	Sleep(3000);
	break;
}
else if (ch=='N'|| ch=='n'){
	printf("\nHave a Good Days...");
	exit(1);
}
else{
	printf("\nWrong Input...\a");
}
}
}
}
