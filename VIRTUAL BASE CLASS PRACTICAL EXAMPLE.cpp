#include<iostream>
#include<string>
using namespace std;

/*
student --> Test
student -- >Sports
Test --> result
Sports--> result


*/
class Student {
     protected:
              int roll_number;
     public:
           
           void set_roll_number(int r) {
              roll_number=r;
              }
           void print_roll_number() {
           cout<<"The roll number is : " <<roll_number<<endl;
           } 
           
};  
class Test : virtual public Student{
      protected:
                float maths, physics;
      public:
            void set_marks(float m, float p) {
            maths=m;
            physics=p;
            }
            
            void display_marks() {
            cout <<"The marks of math 📐📊📚 are  : "<<maths<<endl;
            cout<< "The marks of physics are : " << physics<<endl;
            cout <<"your result is here"<<endl
                 <<"maths: "<<maths<<endl
                 <<"physics : "<<physics <<endl; 
            }
};       
class Sports : virtual public Student{
      protected:
               float score;
      public:
            void set_score (float s) {
                score= s;
                }
            void display_score() {
            cout<< "Your score is  : "<<score<<endl;  
            }
};

class Result : public Test , public Sports{
    protected: 
           float total;
    public:
          void display_result() {
             total = maths+physics+ score ;
             print_roll_number();
             display_marks();
             display_score();
             cout<<"Your total result is : "<<total<<endl;
             }
}  ;       
int main(){
cout<<"Practical Example of VIRTUAL BASE CLASS "<<endl;
Result sk;
sk. set_roll_number(16975) ;
sk. set_marks(87.40, 98.07) ;
sk. set_score(154.12) ;
sk. display_result() ;

return 0;}