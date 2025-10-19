#include<iostream>
#include<string>
using namespace std;

class Employee {
     private:
            int id ;
            int salary;
            
     public:
            void setid()
               {
               salary=122;
                cout<<"Enter the id  :"<<endl;
                cin>> id;
               }               
            void getid() 
               {
                cout<<"The id  of this employee is  : "<<id <<endl;
               }
};             
int main() {
cout<<"Let's do some array of objects with classes :"<<endl;
//Employee saud;/// this is one way but what if there are 2000 employees
Employee Rafique[4];
for(int i = 0 ;i<4 ;i ++) 
  { Rafique[i]. setid();
    Rafique[i]. getid();
  }   

return 0;}