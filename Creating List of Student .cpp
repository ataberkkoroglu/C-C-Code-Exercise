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
    student=(Student *) calloc(1,sizeof(Student));
    printf("Welcome To Program...\n%d: %d : %d  %d.%d.%d",Tm->tm_hour,Tm->tm_min,Tm->tm_sec,Tm->tm_mday,Tm->tm_mon+1,Tm->tm_year+1900);
    int num;
    char lesson[7],ch;
    while(1){
    printf("\nHow Many Students Do You Want To Add to List ? : ");scanf("%d",&num);
    student=(Student *) realloc(student,(num-1)*sizeof(Student));
    for(int i=0;i<num;i++){
        printf("%d. Students' Name If Student have more than one name ,Write like (A.Mehmet): ",i+1);scanf("%s",&student[i].name);
        printf("%d. Students' Surname: ",i+1);scanf("%s",&student[i].surname);
        printf("%d. Student's Number of School : ",i+1);scanf("%s",&student[i].number);
        printf("%d. Students' Grade of Visa Exam: ",i+1);scanf("%d",&student[i].visa);
        printf("%d. Students' Grade of Final Exam: ",i+1);scanf("%d",&student[i].Final);
        student[i].average=student[i].visa*0.4+student[i].Final*0.6;
        if (student[i].average>=60){
            student[i].result=1;
        }
        else{
            student[i].result=0;
        }
    }
    for(int e=0;e<num;e++){
        printf("\n-----%d. Student's Informations-----",e+1);
        if (student[e].result==1){
            printf("\nName: %s\nSurname: %s\nNumber: %s\nVisa Exam: %d\nFinal Exam: %d\nAverage: %lf\nState: Successfull",student[e].name,student[e].surname,student[e].number,student[e].visa,student[e].Final,student[e].average);
        }
        else{
            printf("\nName: %s\nSurname: %s\nNumber: %s\nVisa Exam: %d\nFinal Exam: %d\nAverage: %lf\nState: Unsuccessfull",student[e].name,student[e].surname,student[e].number,student[e].visa,student[e].Final,student[e].average);
        }
        
    }
        while(1){
        printf("\nWould You Like To Contunie(Y/N) ? : ");ch=getche();
        if(ch=='Y' || ch=='y'){
            _sleep(2);
            break;
        }
        else if (ch=='N' || ch=='n'){printf("\nHave a Good Days...\n%d: %d : %d  %d.%d.%d",Tm->tm_hour,Tm->tm_min,Tm->tm_sec,Tm->tm_mday,Tm->tm_mon+1,Tm->tm_year+1900);exit(1);}
        else{printf("Wrong Character...\nPlease Write Again...\a");}
      }
}
    }
   