#include<iostream>
using namespace std;

class Ex{
	public:
		string message;
	public:
		Ex(string message): message{message} {}
        void Yaz(){
        	cout<<endl<<message;
		}
		
};

int main(void){
	setlocale(LC_ALL,"Turkish");
	FILE *fp;
	printf("\nHata Isleme Egzersizi...");
	try{
		
		fp=fopen("Ataberk.txt","r");
		char a[]{"Ataberk"};
		//throw a;
		throw Ex("Ataberk2");
	}
	catch(int error){ 
		printf("\n%d\nB�yle Bir Dosya Bulunamad�...\a",error);
	}
	catch(const char*error){ //Throw'un Yan�nda De�i�ken Olmazsa B�yle Yap.
		cout<<endl<<error;
	}
	catch(char*error ){ //Throw'un Yan�nda De�i�ken Yaz�l�rsa B�yle Yap.
		cout<<endl<<error;
	}
	catch(Ex error){
		error.Yaz();
	}

}
