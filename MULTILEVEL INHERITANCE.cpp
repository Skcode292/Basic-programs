#include<iostream>
#include<string>
using namespace std;

class student{
     protected:
              int rollnumber;
     public:
            void set_roll_number(int);
            void get_roll_number();
            
};
void student :: set_roll_number(int r) {
   rollnumber= r;
 }
void student :: get_roll_number() {
    cout <<"the roll number is : " << rollnumber <<endl;
 } 
class exams : public student {
     protected:
       float maths;
       float physics;
       
     public:
           void set_marks(float, float) ;
           void get_marks() ;
        
}; 
void exams :: set_marks(float m, float p) {
     maths = m;
     physics =p;
    
}
void exams  :: get_marks () {
    cout <<"The marks of maths are : "<<maths<<endl;
    
    cout <<"The marks of physics are : "<<physics<<endl;
}   
class result : public exams {
     private :
            float percentage;
     public:
            void display () {
            get_roll_number() ;
            get_marks() ;
             cout<< " Your percentage is  : "<<(maths+physics)/2<<"%"<<endl;
                }
};                
int main() {
/*
Notes: 
 if we are inheriting B form A and C form B then
  1. A is the base class of B and B is the base class for C
  2. A--> B-->C , this is inheritance path 
  
*/
cout <<"Let's practice MULTILEVEL INHERITANCE \n"<<endl;
student s1;
exams e1;
result r1;
r1. set_roll_number(120) ;
r1. set_marks(56.7, 98.2) ;
r1. display () ;

return 0;}