#include<iostream>
#include<string>
using namespace std ;
//creating a class, general_employee 
class general_employee{
     private:
            string name;
            int   salary;
            

     public:
      void setdata(){
        
          cout<<"Enter the name of employee  :"<<endl;
          cin>>name;
          cout<<"Enter the salary for this employee :"<<endl;
           cin >>salary;
          }
      void displaydata()  {
          cout<<"The name of employee is "<< name<<endl;
          cout <<"the salary of this employee is :"<<salary<<endl;
           }

};
int main(){
 cout<<" first question, about set and get and print using class"<<endl;
 general_employee employee1;
 employee1. setdata();
 employee1. displaydata();
 

return 0;
}