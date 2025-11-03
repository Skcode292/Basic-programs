#include<iostream>
#include<string>
using namespace std;

class base{
      int data1;//by default it is private, these private data members are not accessible 
      public:
             int data2;//it's public
               void setdata() ;
               int getdata1() ;
               int getdata2() ;
             
};

void base :: setdata() {
     data1= 1000;
     data2= 2000;
     }
int base :: getdata1() {
 return data1;
 }
int base :: getdata2() {
 return data2;
 } 
 

class derived : public base {//we are deriving a class
    int data3;
    int call;
    public:
          void process () ;
          int  display() ;
          int access1() ;
};
int derived :: access1() {
     call =10*getdata1();
     return call;
      }

void derived :: process() {
    data3 =data2*getdata1() ;
    }
int derived :: display () {
    cout<<"The value of data 1 is :"<<getdata1()<<endl;
    cout<<"The value of data 2 is :"<<data2<<endl;
    cout<<"The value of data 3 is :"<<data3<<endl;
    cout <<" let's try to access data 1 a private member of base class :"<<access1()<<endl;
    }
        
int main(){
cout <<"SINGLE INHERITENCE PROGRAM " <<endl;
derived   d1;
base b1;
d1. setdata() ;
d1. getdata1() ;
d1. getdata2() ;
d1. access1() ;
d1. process() ;
d1. display() ;

return 0;}