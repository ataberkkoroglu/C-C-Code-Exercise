#include<iostream>
using program=int(*)(int,int);

int topla(int a,int b){
    return a+b;
}
int call(program P){
    std::cout<<std::endl<<P(4,6);
}
 
int main(void){
    call(topla);
}