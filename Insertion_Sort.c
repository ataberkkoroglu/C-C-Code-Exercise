#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<Windows.h>

void Insertion_Sort(float *,int);

int main(void){

  time_t Time;
  Time=time(NULL);
  struct tm *Tm=localtime(&Time);
  printf("\e[1;32mWelcome...\n%.2d.%.2d.%.2d  %.2d : %.2d : %.2d\e[0m",Tm->tm_mday,Tm->tm_mon+1,Tm->tm_year+1900,Tm->tm_hour,
  Tm->tm_min,Tm->tm_sec);

  char ch;
  float *arr;
  int n;
  printf("\n\e[1;36mEnter the number of elements:\e[0m ");scanf("%d",&n);
  n=n<0 ? n*-1:n;
  arr=(float *) calloc(n,sizeof(float));

  while(1){
    for(int i=0;i<n;++i){
       
        printf("\n\e[1;35mEnter element %d:\e[0m ",i+1);scanf("%f",&arr[i]);

    }

    Insertion_Sort(arr,n);

    for(int i=0;i<n;++i){

        printf("\n\e[1;32m%d : \e[1;36m%.2f ",i+1,arr[i]);

    }
    while(1){

        fflush(stdin);
        printf("\n\e[1;35mDo you want to sort again (y/n) ? :\e[0m ");scanf(" %c",&ch);

        if(ch=='Y' || ch=='y'){

            static int num2;
            printf("\n\e[1;36mEnter the number of elements:\e[0m ");scanf("%d",&num2);
            arr=(float *) calloc(num2,sizeof(float));
            n=num2;
            n=n<0 ? n*-1:n;
            printf("\n\e[1;32mIn Progress...\e[0m");
            Sleep(3000);
            break;

        }
        else if (ch=='N' || ch=='n'){

            printf("\n\e[1;32mExiting...\e[0m");
            Sleep(3000);
            free(arr);
            return 0;

        }
        else
            printf("\n\e[1;4;31mInvalid input. Please enter y or n.\e[0m\n\a");
        
    }
  }

    _exit(EXIT_SUCCESS);

}

void Insertion_Sort(float *arr,int n){
    float temp;
    for(int i=1;i<n;++i){
        if(arr[i-1]>arr[i]){
            for(int j=i;j>0;--j){
                if(arr[j]<arr[j-1]){
                    temp=arr[j];
                    arr[j]=arr[j-1];
                    arr[j-1]=temp;
                }
            }
        }
    }
}
