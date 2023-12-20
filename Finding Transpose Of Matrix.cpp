#include<iostream>

using namespace std;

int main(void){

    int arr[3][3]={{0}},transpose[3][3]={{0}};

    for(int i=0;i<3;++i){
        for(int j=0;j<3;++j){
            //arr[i][j]=(i+1)*(j+1);
        
            cout<<arr[i][j]<<' ';
        }
        cout<<endl;
    }
    cout<<"*************************************************\n";
    for(int i=0;i<3;++i){
        for(int j=0;j<3;++j){
            transpose[j][i]=arr[i][j];
            
        }
    }
    
      for(int i=0;i<3;++i){
        for(int j=0;j<3;++j){
            cout<<transpose[i][j]<<' ';
            
        }
        cout<<endl;
    }
    return 0;

}