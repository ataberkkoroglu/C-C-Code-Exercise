#include<stdio.h>
#include<locale.h>

int main(void){
setlocale(LC_ALL,"Turkish");
printf("Programa Ho�geldiniz...\n");
int sayi[2];
int i;
for (i=0;i<2;i++){
printf("%d. Say�y� Giriniz: ",i+1);
scanf("%d",&sayi[i]);
}

if(sayi[0]==sayi[1]){
	printf("%d",5);
}
else{
	while (i<25){
		printf("\nE�it De�il.");
		i++;
	}
}
}
