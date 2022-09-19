#include<stdio.h>
#include<locale.h>

int main(void){
setlocale(LC_ALL,"Turkish");
printf("Programa Hoþgeldiniz...\n");
int sayi[2];
int i;
for (i=0;i<2;i++){
printf("%d. Sayýyý Giriniz: ",i+1);
scanf("%d",&sayi[i]);
}

if(sayi[0]==sayi[1]){
	printf("%d",5);
}
else{
	while (i<25){
		printf("\nEþit Deðil.");
		i++;
	}
}
}
