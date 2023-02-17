#include<stdio.h>
#include<locale.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>

struct Student{
    char name[11],surname[10],number[11];
    int visa,Final;
    double average;
    int result;
};

int main(void){
    setlocale(LC_ALL,"Turkish");
    time_t Time;
    FILE *fp;
    
    Time=time(0);
    struct tm *Tm=localtime(&Time);
    struct Student *student;
    double class_average;float sum;
    printf("Welcome To Program...\n%d: %d : %d  %d.%d.%d",Tm->tm_hour,Tm->tm_min,Tm->tm_sec,Tm->tm_mday,Tm->tm_mon+1,Tm->tm_year+1900);
    int num;
    char lesson[7],ch;
    while(1){
    
    student=(Student *) calloc(1,sizeof(Student));
    while(1){
        printf("\nHow Many Students Do You Want To Add to List ? : ");scanf("%d",&num);
        if (num<=0){
            printf("\nInvalid Number...\nPlease Write Again...");
        }
        else{
            break;
        }
    }
    
    student=(Student *) realloc(student,(num-1)*sizeof(Student));
   
        for(int i=1;i<=num;i++){
        printf("%d. Student's Name If Student have more than one name ,Write like (A.Mehmet): ",i);scanf("%s",&student[i-1].name);
        printf("%d. Student's Surname: ",i);scanf("%s",&student[i-1].surname);
        printf("%d. Student's Number of School : ",i);scanf("%s",&student[i-1].number);
        printf("%d. Students' Grade of Visa Exam: ",i);scanf("%d",&student[i-1].visa);
        printf("%d. Students' Grade of Final Exam: ",i);scanf("%d",&student[i-1].Final);
        student[i-1].average=student[i-1].visa*0.4+student[i-1].Final*0.6;
        sum +=student[i-1].average;
        class_average=sum/i;
        if (student[i-1].average>class_average){
            student[i-1].result=1;
        }
        else{
            student[i-1].result=0;
        }
    }
    for(int e=1;e<=num;e++){
        printf("\n-----%d. Student's Informations-----",1);
        if (student[e-1].result==1){
            printf("\nName: %s\nSurname: %s\nNumber: %s\nVisa Exam: %d\nFinal Exam: %d\nAverage: %lf\nState: Successfull",student[e-1].name,student[e-1].surname,student[e-1].number,student[e-1].visa,student[e-1].Final,student[e-1].average);
        }
        else{
            printf("\nName: %s\nSurname: %s\nNumber: %s\nVisa Exam: %d\nFinal Exam: %d\nAverage: %lf\nState: Unsuccessfull",student[e-1].name,student[e-1].surname,student[e-1].number,student[e-1].visa,student[e-1].Final,student[e-1].average);
        }
        
    }
    
    free(student);  
        while(1){
        printf("\nWould You Like To Contunie(Y/N) ? : ");ch=getche();
        if(ch=='Y' || ch=='y'){
            free(student);
            break;
        }
        else if (ch=='N' || ch=='n'){Time=time(0);
            struct tm *Tm=localtime(&Time);printf("\nHave a Good Days...\n%d: %d : %d  %d.%d.%d",Tm->tm_hour,Tm->tm_min,Tm->tm_sec,Tm->tm_mday,Tm->tm_mon+1,Tm->tm_year+1900);exit(1);}
        else{printf("Wrong Character...\nPlease Write Again...\a");}
      }
    }
}
