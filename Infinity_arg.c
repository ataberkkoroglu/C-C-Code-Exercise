#include<stdio.h>
#include<stdarg.h>
#include<stdlib.h>


double Sum(int i,...){
    va_list arg;
    va_start(arg,i);
    double sum=0;
    for(int j=0;j<i;j++){

        sum+=va_arg(arg,double);
    }
    va_end(arg);
    return sum;
}

int main(void){
   double x=3,y=9;
printf("%.2lf",Sum(2,x,y));


}
