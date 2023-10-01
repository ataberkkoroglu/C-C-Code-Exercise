#include<iostream>
#include<time.h>
#include<Windows.h>

using namespace std;

#define Print(void) (cout<<"Hello World")
#define Sum(a,b) (a+b)

int main(void){
 Print();
  #ifdef Sum
  cout<<endl<<Sum(10,15);  

  #else
    void Sum(int a,int b){
        return a+b;
    }
    cout<<endl<<Sum(10,15);  
  #endif
  return 0;
}