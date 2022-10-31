#include<stdio.h>
#include<locale.h>
#include<unistd.h>
#include<conio.h>
#include<math.h>
int Process(int x){
	int b,sayac=0,y=x,d=0,e=0;
	while(1){
	  	x /=10;
	  	if (x>=0 && x<1){
	  		sayac++;
	  		break;
		  }
		else{
			sayac++;
		}
	}
	
	int a[sayac];
	sayac=0;
	while(1){
		a[sayac]=y%10;
		y /=10;
		sayac++;
		if (y>=0 && y<1){
			break;
		}
	}
	for (int i=0;i<sayac;i++){
		if (a[i]==a[i+1]){
			d++;
		}
		if (a[i+1]==a[i+2]){
			d++;
		}
		if (a[i]==a[i+2]){
			d++;
		}
		break;
		
		
	}
	
	if (d==0){
		e++;
}

return e;		
}

int main(void){
	setlocale(LC_ALL,"Turkish");
	printf("Welcome To Program...");
	int sayi,sayi2,y,sayac=0;
	char sec;
	while(1){
	while(1){
	
	printf("\nWrite Your Number: ");
	scanf("%d",&sayi);
	
	if (sayi>0){
		//printf("%d",sayi);
		sayi2=sayi;
		break;
	}
	else if (sayi<0){
		sayi2=abs(sayi);
		//printf("%d %d",sayi,sayi2);
		break;
	}
	else{
		printf("\nWrite Your Number Again...\a");
		
	}	
}
while(1){
y=Process(sayi2);
if (y!=0){
	sayac++;
	printf("\n%d has different all of digits",sayi2);
}
else{
	printf("\n%d hasn't different all of digits",sayi2);
}
printf("\nWould You Like To Contunie(Y/N) ? : ");
sec=getche();
if (sec=='Y'||sec=='y'){
	
	sleep(3);
	break;
}
else if (sec=='N' ||sec=='n'){
	printf("\n%d",sayac);
	printf("\nHave a Good Days...");
	exit(1);
}
else{
	printf("\nWrong Input...\a");
}	
}

}
}
