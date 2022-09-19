#include<stdio.h>
#include<locale.h>
int topla(int a,int b){
	int toplam;
	toplam=a+b;
   printf("\nÝþlemin Sonucu: %d",toplam);
   return toplam;
	}


int cikar(int a,int b){
	int fark;
	fark=a-b;
    printf("\nÝþlemin Sonucu: %d",fark);
    return fark;
}

int carp(int a,int b){
	int carpim;
	carpim=a*b;
    printf("\nÝþlemin Sonucu: %d",carpim);
    return carpim;
}
int bol(int a,int b){
	float bolme;
	bolme=float(a)/b;
    printf("\nÝþlemin Sonucu: %lf",bolme);
    return bolme;
}
int asal (int a){
		if(a==2|| a==3){
			printf("\n%d Sayýsý Asal Sayýdýr.",a);
		}
		if(a>1){
			for(int i=3;i<a;i++){
				if(a%i==0){
					printf("\n %d Sayýsý Asal Sayý Deðildir.",a);
					break;
				}
				else if((i+1)==a){
					printf("\n%d Sayýsý Asal Sayýdýr.",a);
					break;
				}
			}
		}
		else {
			printf("\n%d Sayýsý Asal Sayý Deðildir.",a);
		}
}
int main(){
setlocale(LC_ALL,"Turkish");
int n;
printf("Uygulamaya Hoþgeldiniz...\n");
int a,b,sec,r=3;
printf("\n%d. Sayýyý Giriniz:",1);
scanf("%d",&a);
asal(a);
printf("\n%d. Sayýyý Giriniz:",2);
scanf("%d",&b);
asal(b);
while (0<r){	
printf("\n\nToplama Ýþlemi için'1'i\nÇýkarma Ýþlemi için'2'yi\nÇarpma Ýþlemi için'3'ü\nBölme Ýþlemi için '4'ü Seçiniz.");
printf("\nSeçimi Yapýnýz: ");
scanf("%d",&sec);
switch(sec)	{
	
	case 1:
		int y;
		y=topla(a,b);
		if(y==2){
			printf("\n2 Sayýsý Asal Sayýdýr.");
			r=-1;
		}
		if(y>1){
			for(int i=3;i<y;i++){
				if(y%i==0){
					printf("\n %d Sayýsý Asal Sayý Deðildir.",y);
					r=-1;
					break;
				}
				else if((i+1)==y){
					printf("\n%d Sayýsý Asal Sayýdýr.",y);
					r=-1;
					break;
				}
			}
		}
		break;
	case 2:
		int z;
		z=cikar(a,b);
		if(z==2){
			printf("\n2 Sayýsý Asal Sayýdýr.");
			r=-1;
		}
			if(z>1){
			for(int i=3;i<z;i++){
				if(z%i==0){
					printf("\n %d Sayýsý Asal Sayý Deðildir.",z);
					r=-1;
					break;
				}
				else if((i+1)==z){
					printf("\n%d Sayýsý Asal Sayýdýr.",z);
					r=-1;
					break;
				}
			}
		}
		break;
	case 3:
		int c;
		c=carp(a,b);
		if(c==2){
			printf("\n2 Sayýsý Asal Sayýdýr.");
			r=-1;
		}
		if(c>1){
			for(int i=3;i<c;i++){
				if(c%i==0){
					printf("\n %d Sayýsý Asal Sayý Deðildir.",c);
					r=-1;
					break;
				}
				else if((i+1)==c){
					printf("\n%d Sayýsý Asal Sayýdýr.",c);
					r=-1;
					break;
				}
			}
		}
		break;
	case 4:
		int k;
		k=bol(a,b);
		if(k==2){
			printf("\n2 Sayýsý Asal Sayýdýr.");
			r=-1;
		}
		if(k>1){
			for(int i=3;i<k;i++){
				if(k%i==0){
					printf("\n %d Sayýsý Asal Sayý Deðildir.",k);
					r=-1;
					break;
				}
				else if((i+1)==k){
					printf("\n%d Sayýsý Asal Sayýdýr.",k);
					r=-1;
					break;
				}
			}
		}
		break;
	default:
		r--;
		printf("\nYanlýþ Seçim Yaptýnýz...");
		break;
		
		
		
}

	
	
return 0;
}
}
