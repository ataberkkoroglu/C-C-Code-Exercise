#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#include<conio.h>
#include<Windows.h>

int Min(int a, int b){return (a>b) ? b:a;};
int distanceToEdge(int n,int x,int y){return Min(Min(x,y), Min(2*n-2-x,2*n-2-y));};
        
int main() 
{
    time_t Time;
    Time=time(0);
    struct tm *Tm=localtime(&Time);
    char ch;
    printf("Welcome To Program...\n%d : %d : %.2d\t%d.%d.%d",Tm->tm_hour,Tm->tm_min,Tm->tm_sec,Tm->tm_mday,Tm->tm_mon+1,Tm->tm_year+1900);;
    int num;
    while(1){
        printf("\nWrite a Number : ");scanf("%d", &num);
    
    	for(int i = 0; i<2*num-1; i++){ 
        for(int j = 0; j<2*num-1; j++){
            printf("%d ", num - distanceToEdge(num, i, j)); 
        
    }
    printf("\n");
    }
    while(1){
        printf("\nWould You Like To Contunie (Y/N) ? : ");ch=getche();
        if (ch=='Y' || ch=='y'){
            Sleep(2000);
            break;
        }
        else if (ch=='N' || ch=='n'){
            Time=time(0);
            struct tm *Tm=localtime(&Time);
            printf("\n\e[1mHave a Good Days...\n%d: %d : %.2d  %d.%d.%d\e[0m",Tm->tm_hour,Tm->tm_min,Tm->tm_sec,Tm->tm_mday,Tm->tm_mon+1,Tm->tm_year+1900);
            exit(1);
        }
        else{
            printf("\n\e[1mWrong Character...\nPlease Write Again...\e[0m");
    }
    }
    }
    
	
  return 0;
}
