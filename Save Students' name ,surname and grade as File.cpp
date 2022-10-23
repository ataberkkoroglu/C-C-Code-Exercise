#include<stdio.h>
#include<locale.h>
#include<conio.h>
#include<unistd.h>
#include<string.h>
#include<stdlib.h>

struct Data{
	char Ad[10];
	char Ad2[10];
	char Soyad[10];
	int puan;
};

int main(void){
	FILE *fp;
	int i=0,b,d;
	char sec;
	printf("Welcome To Program...\n");
	printf("How Many Student's Informations Would You Like To Write Here? :  ");
	scanf("%d",&b);
	struct Data data[b];
	int KayitUzunluk=sizeof(data);
	
	int RegisterPosition=(b-1)*KayitUzunluk;
	
	setlocale(LC_ALL,"Turkish");
	fp=fopen("PhysicsLab.txt","r+");
	
	if (fp=='\0'){
		fopen("PhysicsLab.txt","w+");
	}
	
	while(i<b){
		
		int a='\0';
		
		while(1){
		printf("\nHow Many Name Does Your Student Have(1/2)? ");
		scanf("%d",&a);
		
		if (a!=1){
		printf("\nWrite Your Student's Name: ");
		scanf("%s %s",data[i].Ad,data[i].Ad2);
		break;
	}
	  else if (a==1){
	  	printf("\nWrite Your Student's Name: ");
	  	scanf("%s",&data[i].Ad);
	  	for (int k=0;k<10;k++){
	  	data[i].Ad2[k]='\0';
	  }
	  
	  break;
	  }
	  
	  else{
	  	printf("\nIf You Have Name More Than Two, Add Second Name As Underline.\a ");
	  }	
}
		printf("\nWrite Your Student's Surname: ");
		scanf("%s",&data[i].Soyad);
		printf("\nWrite Your Student's Grade: ");
		scanf("%d",&data[i].puan);
		if (fscanf(fp,"%d",&d)!='\0'){
		fseek(fp,RegisterPosition,SEEK_END);
		fprintf(fp,"\r%d)\t",d+1);
	}
	
		else{
			fprintf(fp,"\r%d)\t",i+1);
	}
	
		if (a!=1){
			for (int k=0;k<strlen(data[i].Ad);k++){
				if (k>=2){
					fprintf(fp,"*");
				}
				else{
					fprintf(fp,"%c",data[i].Ad[k]);
				}
			}
			
			fprintf(fp," ");
				for (int k=0;k<strlen(data[i].Ad2);k++){
				if (k>=2){
					fprintf(fp,"*");
				}
				else{
					fprintf(fp,"%c",data[i].Ad2[k]);
				}
			}
			
			    fprintf(fp," ");
		    	for (int k=0;k<strlen(data[i].Soyad);k++){
				if (k>2){
					fprintf(fp,"*");
				}
				else{
					fprintf(fp,"%c",data[i].Soyad[k]);
				}
			}
			
			fprintf(fp," ");
		    fprintf(fp," = %d\n",data[i].puan);
		    
	}
	    else if (a==1){
	   			for (int k=0;k<strlen(data[i].Ad);k++){
				if (k>=2){
					fprintf(fp,"*");
				}
				else{
					fprintf(fp,"%c",data[i].Ad[k]);
				}
			}
			fprintf(fp," ");
	   			for (int k=0;k<strlen(data[i].Soyad);k++){
				if (k>2){
					fprintf(fp,"*");
				}
				else{
					fprintf(fp,"%c",data[i].Soyad[k]);
				}
			}
			fprintf(fp," ");
	        fprintf(fp," = %d\n",data[i].puan);
	        
	}
		i++;
		if (i<b){
		while(1){
			printf("\nWould You Like To Contunie? : ");
			sec=getche();
			if (sec=='e' ||sec=='E'){
				sleep(3);
				break;
			}
			else if (sec=='H'|| sec=='h'){
				printf("\nHave a Good Days...");
				fclose(fp);
				exit(1);
			}
			else{
				printf("\nWrong Input...\a");
			}
		}
	}
		
	}
}
