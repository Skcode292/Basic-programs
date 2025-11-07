#include<iostream>
#include<string>
using namespace std;

class Employee{
     private:
            string name;
            double salary;
     public:
            void setdata() ;
            void displaydata() ;
            double calculate_bonus(double s) ;
            
};
void Employee :: setdata () {
     cout<<"Enter the name of Employee :"<<endl;
     cin>> name;
     cout<<"Enter his salary :"<<endl;
     cin>> salary;
     }     
void Employee :: displaydata() {
     cout <<"The name of employee is : " <<name<<endl;
     cout <<"Employee salary is      : " << salary<<endl;
     }
double Employee :: calculate_bonus (double bonus) {
      
      cout<<" The bonus for this Employee is :" <<  bonus;
      salary += bonus ;
      cout << " \nThe updated salary after bonus "<<salary <<endl;
      
      return salary;
      }
class manager : public Employee {
      public :
       void showbonus() ;
       
      
};
void manager :: showbonus () {
     cout << " This is a class for manager bonus " <<endl;
      }
class Developer : public Employee {
      public :
             void showbonus() ; 
};
void Developer :: showbonus() {
   cout << " This is a class for Developer bonus " <<endl;
   }

    
int main(){
cout<<" PROGRAM FOR PORTRAYING  OOP CONCEPTS \n" <<endl;
Employee saud;
Developer d1;
manager m1;
cout<<" \n\n Now for  the Developer \n\n";
d1. setdata() ;
d1. displaydata() ;
d1. showbonus() ;
d1. calculate_bonus(6000) ;
cout<<" \n Now for  the manager \n\n";
m1. setdata() ;
m1. displaydata() ;
m1. showbonus() ;
m1. calculate_bonus(200) ;


return 0;
}