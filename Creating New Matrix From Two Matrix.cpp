#include<iostream>
using namespace std;

int main(void){
	setlocale(LC_ALL,"Turkish");
	printf("Welcome To Program...");
	int Array1[3][3],Array3[3][3],Array2[3][3],toplam=0;
	
	//First Array
	cout<<endl<<"Array1";
	for (int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<endl<<i+1<<". "<<j+1<<". Write Your Number: "
;cin>>Array1[i][j];		}
	}
	//Second Array
	cout<<endl<<"Array2";
	for (int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<endl<<i+1<<". "<<j+1<<". Write Your Number: "
;cin>>Array2[i][j];		}
	}
	//(First Array*Second Array)
	for (int k=0;k<3;k++){
		for (int e=0;e<3;e++){
			for (int y=0;y<3;y++){
			  toplam=toplam+Array1[k][e]*Array2[k][y];	
			  Array3[e][y]=toplam;
			  
			}
		}
	}
	for (int i=0;i<3;i++){
		for (int k=0;k<3;k++){
			cout<<endl<<" Array3's "<<i<<"."<<k<<" Number: "<<Array3[i][k];
		}
		
	}
}
