#include <stdio.h>


int main(){
	
int Sayi1;
int Sayi2;
int Sayi3;
printf("Sirasiyla  Uc Sayiyiyi Aralarina Virgul Koyarak Giriniz= ");
scanf("%d,%d,%d",&Sayi1,&Sayi2,&Sayi3);
if(Sayi1>Sayi2&& Sayi1>Sayi3){
	
	if (Sayi2>Sayi3){
	 printf("%d>%d>%d",Sayi1,Sayi2,Sayi3);
	}
	else if (Sayi3>Sayi2){
		printf("%d>%d>%d",Sayi1,Sayi3,Sayi2);
	}
	else{
	
		printf("%d>%d=%d",Sayi1,Sayi3,Sayi2);
	}
}
else if(Sayi2>Sayi1&& Sayi2>Sayi3){
		if (Sayi1>Sayi3){
	 printf("%d>%d>%d",Sayi2,Sayi1,Sayi3);
	}
	else if (Sayi3>Sayi1){
		printf("%d>%d>%d",Sayi2,Sayi3,Sayi1);
	}
	else{
	
		printf("%d>%d=%d",Sayi2,Sayi3,Sayi1);
	}
}
else if (Sayi1=Sayi2=Sayi3){
	printf("%d=%d=%d",Sayi1=Sayi2=Sayi3);
}
else {
		if (Sayi1>Sayi2){
	 printf("%d>%d>%d",Sayi3,Sayi1,Sayi2);
	}
	else if (Sayi2>Sayi1){
		printf("%d>%d>%d",Sayi3,Sayi2,Sayi1);
	}
	else{
	
		printf("%d>%d=%d",Sayi3,Sayi2,Sayi1);
	}
}
}
