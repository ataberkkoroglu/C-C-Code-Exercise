#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int min(int a, int b){return (a>b) ? b:a;}; //�ki say� al�p en k�����n� return edecek bir fonksiyon.
int distanceToEdge(int n,int x,int y){return min(min(x,y), min(2*n-2-x,2*n-2-y));}; //Bulunulan koordinat�n en yak�n oldu�u kenara olan uzakl���n� bulmak i�in kulland���m�z bir fonksiyon.
        
int main() 
{
    int n;
    scanf("%d", &n);
    //Karenin her sat�r�n� ve s�tununu dola�abilmek i�in i� i�e iki for d�ng�s�.
    
    	for(int i = 0; i<2*n-1; i++){ 
        for(int j = 0; j<2*n-1; j++){
            printf("%d ", n - distanceToEdge(n, i, j)); //Bulunulan koordinat�n en yak�n oldu�u kenara olan uzakl���n�, en b�y�k de�er olan n'den ��kar�p yazd�r�yoruz.
        }
        printf("\n");
    }
    
	
  return 0;
}
