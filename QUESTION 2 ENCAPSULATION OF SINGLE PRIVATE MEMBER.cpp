#include<iostream>
#include<string>
using namespace std;

class Account{
     //A private data member 
     private:
          double  balance;
     public:
           Account() {
           
           cout<<"Enter your balance"<<endl;
           cin>>balance;
           }
           Account (int a) {
           balance=a;
           }
           void display(){
           cout <<"The single encapsulated data member is : " <<balance<<endl;}
};           
int main (){
cout <<"QUESTION 2 : ENCAPSULATION OF A SINGLE PRIVATE DATA MEMBER" <<endl;
Account A1;
A1. display(); 

return 0;}