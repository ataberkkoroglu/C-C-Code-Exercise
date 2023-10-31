#include<iostream>
using namespace std;

void Sum(int &num){
    num++;
}
int main(void){
    int num=5;
    Sum(num);
    cout<<num;
}