#include<stdio.h>
#include<time.h>
#include<conio.h>
#include<math.h>
#include<Windows.h>

int main(void){
    time_t Time;
    Time=time(NULL);
    struct tm *Tm=localtime(&Time);char ch;
    printf("\n\e[1mWelcome To Program...\n\e[1;32m%2d : %2d : %2d  %d.%d.%d\n\e[0m",Tm->tm_hour,Tm->tm_min,Tm->tm_sec,Tm->tm_mday,Tm->tm_mon+1,Tm->tm_year+1900);
    int a,b,c;
    while(1){
       printf("\n\e[1;4;33mWrite Leading Coeficients Of Equation(2.Degree) :\e[0m");scanf("%d %d %d",&a,&b,&c);
       float x=a*x*x+b*x+c;
       double x1=(-b +sqrt(pow(b,2)-(4*a*c)))/(2*a);
       double x2=(b +sqrt(pow(b,2)-(4*a*c)))/(2*a);
       printf("\n\e[1;4;31mFirst Root Of Equation : \e[0m\e[1;33m%.2lf",x1);
       printf("\n\e[1;4;31mSecond Root Of Equation : \e[0m\e[1;33m%.2lf",x2);
       while(1){
          printf("\n\e[1;4;36mWould You Like To Contunie(Y/N) ? :\e[0m ");ch=getche();
	  
	      if (ch=='Y' || ch=='y'){
	 	     Sleep(2000);
	          break;
	       }
	      else if (ch=='n' || ch=='N'){
            Time=time(NULL);
            struct tm *Tm=localtime(&Time);
	 	    printf("\n\e[1;32mHave a Good Days...\n%d : %d : %d\t%d.%d.%d\e[0m",Tm->tm_hour,Tm->tm_min,Tm->tm_sec,Tm->tm_mday,Tm->tm_mon+1,Tm->tm_year+1900);
            exit(0);
          }
     else{
        printf("\n\e[1;31mWrong Character...\nPlease Write Again...\a");
     }
    }

}
}