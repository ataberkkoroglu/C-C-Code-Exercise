#include<iostream>
#include<conio.h>
#include<Windows.h>
#include<time.h>
#include<stdlib.h>
#include<math.h>
#define randnum(min,max) ((rand() % (int) (((max) + 1) - (min))) + (min))
using namespace std;
class Ogrenci{
		char Name[20];
		char Surname[20];
		int vize;
		int quiz;
		int final;
		int asignment,b,n;
		int Average,d;
		FILE *fp,*file;
		string Harf;
        static int i;
        public:
		Ogrenci(char Name[20],char Surname[20],int vize,int quiz,int final,int n){
			this->Name[20]=Name[20];
			this->Surname[20]=Surname[20];
			this->vize=vize;
			this->quiz=quiz;
			this->final=final;
			this->n=n;
			
		}
		void Odev(){
			srand(time(NULL));
			asignment=randnum(0,100);
		}
		void CalculateAverage(){
			fp=fopen("Successful.txt","r+");
	        file=fopen("Unsuccessful.txt","r+");
	        if (fp=='\0' or file=='\0'){
		     fp=fopen("Successful.txt","w+");
	         file=fopen("Unsuccessful.txt","w+");
	         fprintf(fp,"Name\tSurname\tQuiz\tAsignment\tVize\tFinal\tCharacter\n");
	         fprintf(file,"Name\tSurname\tQuiz\tAsignment\tVize\tFinal\tCharacter\n"); 
	}
			Average=vize*0.25+asignment*0.10+quiz*0.15+final*0.5;
			int KayitUzunluk=sizeof(Ogrenci);
	        int RegisterPosition=(n-1)*KayitUzunluk;
	        if (fscanf(fp,"%d",&b)!='\0'){
		     fseek(fp,RegisterPosition,SEEK_END);
	        }
	
	       if (fscanf(file,"%d",&d)!='\0'){
		     fseek(file,RegisterPosition,SEEK_END);
	        }
	
			if (Average>=88 && Average<=100){
				fprintf(fp,"\n%d)",b+1);
				fprintf(fp," ");
					for (int i=0;i<strlen(Name);i++){
						fprintf(fp,"%c",Name[i]);
					}
					fprintf(fp," ");
					for (int i=0;i<strlen(Surname);i++){
						fprintf(fp,"%c",Surname[i]);
					}
				if (final>=45){
										
					fprintf(fp,"\t%d\t%d\t%d\t%d\tAA",quiz,asignment,vize,final);
				}
				else{
					fprintf(fp,"\t%d\t%d\t%d\t%d\tFF",quiz,asignment,vize,final);
				}
				
			}
			else if (Average>=80 && Average<88 ){
				        fprintf(fp,"\n%d)",b+1);
					fprintf(fp," ");
					for (int i=0;i<strlen(Name);i++){
						fprintf(fp,"%c",Name[i]);
					}
					fprintf(fp," ");
					for (int i=0;i<strlen(Surname);i++){
						fprintf(fp,"%c",Surname[i]);
					}
				if (final>=45){
				
				 fprintf(fp,"\t%d\t%d\t%d\t%d\tBA",quiz,asignment,vize,final);	
				}
				else{
					fprintf(fp,"\t%d\t%d\t%d\t%d\tFF",quiz,asignment,vize,final);
				}
				
			}
			else if (Average>=72 && Average<80){
				    fprintf(fp,"\n%d)",b+1);
					fprintf(fp," ");
					for (int i=0;i<strlen(Name);i++){
						fprintf(fp,"%c",Name[i]);
					}
					fprintf(fp," ");
					for (int i=0;i<strlen(Surname);i++){
						fprintf(fp,"%c",Surname[i]);
					}
				if (final>=45){
				 
				 fprintf(fp,"\t%d\t%d\t%d\t%d\tBB",quiz,asignment,vize,final);	
				}
				else{
					fprintf(fp,"\n%d) %s\t%s\t%d\t%d\t%d\t%d\tFF",quiz,asignment,vize,final);
				}
				
			}
			else if (Average>=64 && Average<72){
				    fprintf(fp,"\n%d)",b+1);
					fprintf(fp," ");
					for (int i=0;i<strlen(Name);i++){
						fprintf(fp,"%c",Name[i]);
					}
					fprintf(fp," ");
					for (int i=0;i<strlen(Surname);i++){
						fprintf(fp,"%c",Surname[i]);
					}
				if (final>=45){
				 fprintf(fp,"\t%d\t%d\t%d\t%d\tCB",quiz,asignment,vize,final);	
				}
				else{
					fprintf(fp,"\t%d\t%d\t%d\t%d\tFF",quiz,asignment,vize,final);
				}
				
			}
			else if (Average>=56 && Average<64){
				     fprintf(fp,"\n%d)",b+1);
				     fprintf(fp," ");
					for (int i=0;i<strlen(Name);i++){
						fprintf(fp," %c",Name[i]);
					}
					fprintf(fp," ");
					for (int i=0;i<strlen(Surname);i++){
						fprintf(fp,"\t%c",Surname[i]);
					}
				if (final>=45){
					fprintf(fp,"\t%d\t%d\t%d\t%d\tCC",quiz,asignment,vize,final);
				}
				else{
					fprintf(fp,"\t%d\t%d\t%d\t%d\tFF",quiz,asignment,vize,final);
				}
				
			}
			else if (Average>=49 && Average<56 ){
				     fprintf(fp,"\n%d)",d+1);
				    fprintf(fp," ");
					for (int i=0;i<strlen(Name);i++){
						fprintf(fp,"%c",Name[i]);
					}
					fprintf(fp," ");
					for (int i=0;i<strlen(Surname);i++){
						fprintf(fp,"%c",Surname[i]);
					}
				if (final>=45){
					fprintf(file,"\t%d\t%d\t%d\t%d\tDC",quiz,asignment,vize,final);
				}
				else{
					fprintf(file,"\t%d\t%d\t%d\t%d\tFF",quiz,asignment,vize,final);
				}
				
				
			}
			else if (Average>=42 && Average<49){
				     fprintf(fp,"\n%d)",d+1);
					fprintf(fp," ");
					for (int i=0;i<strlen(Name);i++){
						fprintf(fp,"%c",Name[i]);
					}
					fprintf(fp," ");
					for (int i=0;i<strlen(Surname);i++){
						fprintf(fp,"%c",Surname[i]);
					}
				if (final>=45){
					fprintf(file,"\t%d\t%d\t%d\t%d\tDD",quiz,asignment,vize,final);
				}
				else{
					fprintf(file,"\t%d\t%d\t%d\t%d\tFF",quiz,asignment,vize,final);
				}
				
			}
			else{
				fprintf(fp,"\n%d)",d+1);
					fprintf(fp," ");
					for (int i=0;i<strlen(Name);i++){
						fprintf(fp,"%c",Name[i]);
					}
					fprintf(fp," ");
					for (int i=0;i<strlen(Surname);i++){
						fprintf(fp,"%c",Surname[i]);
					}
				fprintf(file,"\t%d\t%d\t%d\t%d\tFF",quiz,asignment,vize,final);
				
			}
		}
		~Ogrenci(){
			printf("\nWorked Destructor Method...");
		}
		 	
};

int Ogrenci::i=0;

int main(void){
	time_t Time;
	Time=time(NULL);
	srand(time('\0'));
	printf("Welcome To Program...\n%s",ctime(&Time));
	char Name[20],Surname[20],ch;
	int vize,final,quiz,i=-1,sayac=0;	
	int n;
	while(1){
	 i++;
	 if (i==n && sayac!=0){
	 	 while(1){
	 	 	cout<<endl<<"Would You Like To Contunie(Y/N) ? : ";
	 	    ch=getche();
	 	    if (ch=='Y' or ch=='y'){
	 	 	  sayac=0;
		  }
		   else if (ch=='N' or ch=='n'){
		   	cout<<endl<<"Have a Good Days...";
		   	exit(1);
		   }
		   else{
		   	cout<<endl<<"Invalid Input...\a";
		   }
		  }
	 	 
	 	
	 }
	 while(sayac==0){
		cout<<endl<<"How Many Students Do You Save To Program ? : ";
		cin>>n;
		fflush(stdin);
		
		if (n==0){
			cout<<endl<<"Wrong Input...\a";
			Sleep(1000);
		}
		else if (n<0){
			n=abs(n);
		
			sayac++;
			break;
		}
		else{	
		
		sayac++;
			break;
		}
	}
	 while(1){
		printf("Write %d. Student's Name : ",i+1);
		gets(Name);
		fflush(stdin);
		if (strlen(Name)<3 || strlen(Name)>20){
			cout<<"\nInvalid Name...\a";
		}
	    else{
	    	break;
}
}
     while(1){
    	printf("Write %d. Student's Surname : ",i+1);
		gets(Surname);
		fflush(stdin);
		if (strlen(Surname)<3 || strlen(Surname)>20){
			cout<<"\nInvalid Name...\a";
		}
	    else{
	    	
	    	break;
		}
	}
	 while(1){
		cout<<"Write "<<i+1<<". "<<"Student's Visa Grade: ";
		cin>>vize;
		if (vize<0 or vize>100){
			cout<<endl<<"Invalid Grade...\a";
		}
		else{
			break;
		}
	}
	 while(1){
		cout<<"Write "<<i+1<<". "<<"Student's Quiz Grade: ";
		cin>>quiz;
		if (quiz<0 or quiz>100){
			cout<<endl<<"Invalid Grade...\a";
		}
		else{
			break;
		}
	}
	 while(1){
		cout<<"Write "<<i+1<<". "<<"Student's Final Grade: ";
		cin>>final;
		fflush(stdin);
		if (final<0 or final>100){
			cout<<endl<<"Invalid Grade...\a";
		}
		else{
			break;
		}
	}
Ogrenci ogrenci(Name,Surname,vize,quiz,final,n);
ogrenci.Odev();
ogrenci.CalculateAverage();

}

}

