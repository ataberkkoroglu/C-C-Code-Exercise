#include<stdio.h>
#include<locale.h>
#include<unistd.h>
#include<conio.h>
#include<stdlib.h>

int main(void){
	setlocale(LC_ALL,"Turkish");
	printf("Programa Ho�geldiniz...\n");
	
	int x,y;
	char sec;
	while(1){
	printf("\n1.Say�y� Giriniz: ");
	scanf("%d",&x);
	printf("\n2.Say�y� Giriniz: ");
	scanf("%d",&y);
	if (x<0 || y<0){
		printf("\nYanl�� De�er Girdiniz...\a");
		sleep(1);
	}
	else{
		while(1){
			if (x==y){
				printf("\nGirilen �ki Say�n�n(%d,%d) EKOK'u: %d",x,y,x);
				break;
			}
			else if(x>y && x%y==0){
				printf("\nGirilen �ki Say�n�n(%d,%d) EKOK'u: %d",x,y,x);
				break;
			}
			else if (y>x && y%x==0){
				printf("\nGirilen �ki Say�n�n(%d,%d) EKOK'u: %d",x,y,y);
				break;
			}
			else{
				if (x>y){
					for (int i=x+1;i<=(x*y);i++){
						if (i%x==0 && i%y==0){
							printf("\nGirilen �ki Say�n�n(%d,%d) EKOK'u: %d",x,y,i);
				            break;
						}
					}
					break;
				}
				else if (y>x){
					for (int i=y+1;i<=(x*y);i++){
						if (i%x==0 && i%y==0){
							printf("\nGirilen �ki Say�n�n(%d,%d) EKOK'u: %d",x,y,i);
				            break;
						}
					}
					break;
				}
			}
		}
		while(1){
		printf("\nDevam Etmek �stiyor Musunuz(E/H) ? : ");
		sec=getche();
		if (sec=='E' || sec=='e'){
			printf("\nDevam Ediliyor...");
			sleep(3);
			break;
		}
		else if (sec=='H'|| sec=='h'){
			printf("\nYine Bekleriz...");
			exit(3);
		}
		else{
			printf("\nYanl�� Yaz�ld�...\a");
			
		}
	}
}
}
}
