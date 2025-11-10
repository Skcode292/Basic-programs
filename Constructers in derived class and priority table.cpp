#include<iostream>
#include<string>
using namespace std;

/*
LET'S STUDY CASES OF CALLING CONSTRUCTERS IN DERIVED CLASS OR INHERITANCE
Case 1 :
class B: public class A {}
so in case one order of execution will be  A--> B
Case 2 :
class B: public class A, public class C
so in case two order of execution will be  A--> C--> B
Case 3 :
class B: public class A , virtual class C 
so in case three order of execution will be  C--> A-->B
also remember,  in constructers calling,  virtual base call has to be first 

*/
class base{
     private :
           int data;
     public :
            base(int d) {
             data =d;
             cout<<" The Base constructer is called "<<data <<endl;
             cout<<" The  value of data is :"<<data <<endl;
            }
};
class base2{
     private :
           int data2;
     public :
            base2(int d2) {
             data2 =d2;
             cout<<" The Base 2 constructer is called "<<data2 <<endl;
             cout<<" The  value of data  2 is :"<<data2 <<endl;
            }
};  
class Derived : public base  ,virtual public base2{
     private :
             int data3;
     public :
             Derived (int d ,int d2 ,int d3): base(d),base2 (d2){
              data3=d3 ;
              cout<<" THE Derived constructer is called "<<data3;
              cout<<" The  value of data 3 is :"<<data3 <<endl;
             }  
};                       
int main(){
cout <<" CONCEPT OF CONSTRUCTORS IN DERIVED CLASS AND IT'S WAY OF EXECUTION " <<endl;
Derived sk(100,200,300);

return 0 ;}