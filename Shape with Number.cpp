#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int min(int a, int b){return (a>b) ? b:a;}; //Ýki sayý alýp en küçüðünü return edecek bir fonksiyon.
int distanceToEdge(int n,int x,int y){return min(min(x,y), min(2*n-2-x,2*n-2-y));}; //Bulunulan koordinatýn en yakýn olduðu kenara olan uzaklýðýný bulmak için kullandýðýmýz bir fonksiyon.
        
int main() 
{
    int n;
    scanf("%d", &n);
    //Karenin her satýrýný ve sütununu dolaþabilmek için iç içe iki for döngüsü.
    
    	for(int i = 0; i<2*n-1; i++){ 
        for(int j = 0; j<2*n-1; j++){
            printf("%d ", n - distanceToEdge(n, i, j)); //Bulunulan koordinatýn en yakýn olduðu kenara olan uzaklýðýný, en büyük deðer olan n'den çýkarýp yazdýrýyoruz.
        }
        printf("\n");
    }
    
	
  return 0;
}
