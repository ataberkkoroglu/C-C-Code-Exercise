#include <stdio.h>
#include<locale.h>
#include <string.h>
int main(){
setlocale(LC_ALL,"Turkish");
int sayi[10];
int sayi2[10];
printf("Programa Ho�geldiniz\n");
for(int i=0;i<10;i++){
	printf("%d. Say�y� Giriniz: ",i+1);
	scanf("%d",&sayi[i]);
	
}
for(int e=0;e<10;e++){
	if(sayi[e]%20==0){
		printf("%d\n",sayi[e]);
	}
}


return 0;
}
