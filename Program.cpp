#include<stdio.h>
#include<locale.h>
int topla(int a,int b){
	int toplam;
	toplam=a+b;
   printf("\n��lemin Sonucu: %d",toplam);
   return toplam;
	}


int cikar(int a,int b){
	int fark;
	fark=a-b;
    printf("\n��lemin Sonucu: %d",fark);
    return fark;
}

int carp(int a,int b){
	int carpim;
	carpim=a*b;
    printf("\n��lemin Sonucu: %d",carpim);
    return carpim;
}
int bol(int a,int b){
	float bolme;
	bolme=float(a)/b;
    printf("\n��lemin Sonucu: %lf",bolme);
    return bolme;
}
int asal (int a){
		if(a==2|| a==3){
			printf("\n%d Say�s� Asal Say�d�r.",a);
		}
		if(a>1){
			for(int i=3;i<a;i++){
				if(a%i==0){
					printf("\n %d Say�s� Asal Say� De�ildir.",a);
					break;
				}
				else if((i+1)==a){
					printf("\n%d Say�s� Asal Say�d�r.",a);
					break;
				}
			}
		}
		else {
			printf("\n%d Say�s� Asal Say� De�ildir.",a);
		}
}
int main(){
setlocale(LC_ALL,"Turkish");
int n;
printf("Uygulamaya Ho�geldiniz...\n");
int a,b,sec,r=3;
printf("\n%d. Say�y� Giriniz:",1);
scanf("%d",&a);
asal(a);
printf("\n%d. Say�y� Giriniz:",2);
scanf("%d",&b);
asal(b);
while (0<r){	
printf("\n\nToplama ��lemi i�in'1'i\n��karma ��lemi i�in'2'yi\n�arpma ��lemi i�in'3'�\nB�lme ��lemi i�in '4'� Se�iniz.");
printf("\nSe�imi Yap�n�z: ");
scanf("%d",&sec);
switch(sec)	{
	
	case 1:
		int y;
		y=topla(a,b);
		if(y==2){
			printf("\n2 Say�s� Asal Say�d�r.");
			r=-1;
		}
		if(y>1){
			for(int i=3;i<y;i++){
				if(y%i==0){
					printf("\n %d Say�s� Asal Say� De�ildir.",y);
					r=-1;
					break;
				}
				else if((i+1)==y){
					printf("\n%d Say�s� Asal Say�d�r.",y);
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
			printf("\n2 Say�s� Asal Say�d�r.");
			r=-1;
		}
			if(z>1){
			for(int i=3;i<z;i++){
				if(z%i==0){
					printf("\n %d Say�s� Asal Say� De�ildir.",z);
					r=-1;
					break;
				}
				else if((i+1)==z){
					printf("\n%d Say�s� Asal Say�d�r.",z);
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
			printf("\n2 Say�s� Asal Say�d�r.");
			r=-1;
		}
		if(c>1){
			for(int i=3;i<c;i++){
				if(c%i==0){
					printf("\n %d Say�s� Asal Say� De�ildir.",c);
					r=-1;
					break;
				}
				else if((i+1)==c){
					printf("\n%d Say�s� Asal Say�d�r.",c);
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
			printf("\n2 Say�s� Asal Say�d�r.");
			r=-1;
		}
		if(k>1){
			for(int i=3;i<k;i++){
				if(k%i==0){
					printf("\n %d Say�s� Asal Say� De�ildir.",k);
					r=-1;
					break;
				}
				else if((i+1)==k){
					printf("\n%d Say�s� Asal Say�d�r.",k);
					r=-1;
					break;
				}
			}
		}
		break;
	default:
		r--;
		printf("\nYanl�� Se�im Yapt�n�z...");
		break;
		
		
		
}

	
	
return 0;
}
}
