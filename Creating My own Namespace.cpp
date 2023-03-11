#include<iostream>
namespace ata{
    
    class Class{
        private:
         int a;
        public:
          virtual void print();
    };
    class Class2:Class{
        public:
        void print(){
            std::cout<<std::endl<<5;
        }
    };
    template<typename T>
    T function(T a,T b){
        return a+b;
    }

    template<class C>
    void Call(C T){
       std::cout<<"\nABC";
       T.print();
    }
    std::string Name="Ataberk";
}

void ata::Class::print(){
     std::cout<<"\nHello World";
}
int main(void){
    int *ptr=new int;
    int num;
    printf("\nWrite a Number: ");scanf("%d",&num);
    ptr=&num;
    printf("Number : %d\nAddress of Memory: %x",*ptr,ptr);
    std::cout<<std::endl<<ata::function(5,5)<<std::endl<<ata::Name<<std::endl;
    ata::Class sinif;
    ata::Call(sinif);
    ata::Class2 sinif2;
    
    ata::Call(sinif2);
    delete ptr;

}