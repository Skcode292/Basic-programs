#include<iostream>
#include<string>
using namespace std;

class number{
     private:
            int a=0;
     public:
            number(){} ;
            number(int num){
                  a=num;
                  }
            number(number &obj){
           cout<<"sso this is a copy constructors called "<<endl;
                 a=obj.a;
                }      
     void display(){
     cout<<"The number in this object is  :"<<a <<endl;}              
};



int main(){
number x(200), y, z, z2;
x. display();
y. display();
z. display();
number z1(x) ;
z1. display() ;
z2=z;
z2. display();
number z3=z;
z3. display();
return 0;}