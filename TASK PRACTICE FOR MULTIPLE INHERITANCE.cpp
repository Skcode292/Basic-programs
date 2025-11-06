#include<iostream>
#include<string>
#include<cmath>
using namespace std;

class simplecalculater{
     private:
             float a;
             float b;
             int sum, subtract, multiply, divide ;
     public:
        // void   setnumbers();
           void   arethimaticfunctions(float x, float y) ;
           void   displayarethimaticfunctions();
            
};
//void simplecalculater :: setnumbers(){
  //  a=100;
  //  b=5;
 //   }
void simplecalculater :: arethimaticfunctions(float x , float y) {
    a =x;
    b = y;
    //performing arethimatic functions 
    sum  =a + b;
    subtract  = a-b;
    multiply = a*b;
    divide = a/b;
    
} 
void simplecalculater :: displayarethimaticfunctions() {
     cout <<" The four simple arethimatic functions are as under" <<endl;
     cout <<" ADDTION      "<< " a=100 " <<" + "<< " b=5 " << sum << endl; 
     cout <<" SUBTRACTION   "<< "a=100 " <<" - "<< " b=5 " << subtract << endl; 
     cout <<" MULTIPLY     "<< " a=100 " <<" * "<< " b=5 " << multiply << endl; 
     cout <<" DIVISION     "<< " a=100 " <<" / "<< " b=5 " << divide << endl; 
    
      
} 
class scientificcalculater{
     private:
             float c;
             float d;
             double exponent1,  sqrt1, logarithm1, round1 ;
     public:
        // void   setnumbers();
           void   scientificfunctions(float x, float y) ;
           void   displayscientificfunctions();
            
}; 
void scientificcalculater ::      scientificfunctions(float x , float y) {
    c =x;
    d = y;
    //performing arethimatic functions 
    exponent1   =  pow(c, d) ;
    sqrt1  =  sqrt(c) ;
    logarithm1 = log (d) ;
    round1 = round (c) ;
    
} 
void scientificcalculater :: displayscientificfunctions() {
     cout <<" The four simple scientific  functions are as under" <<endl;
     cout<<"  The exponent function   : "<<exponent1<<endl;
     cout<<"  The sqrt function       : "<<sqrt1<<endl;
     cout<<"  The logarithm function  : "<<logarithm1<<endl;
     cout<<"  The roundoff function   : "<<round1<<endl;
     
      
}   
class hybridcalculater :  public  simplecalculater , public scientificcalculater {
 };
 
 
int main(){
cout<<"  A TASK BY HARRY BHAI "<<endl;
simplecalculater s1;
scientificcalculater sc1;
//s1. setnumbers() ;
s1. arethimaticfunctions(100,5) ;
s1. displayarethimaticfunctions() ;

sc1. scientificfunctions(12.0,3) ;
sc1. displayscientificfunctions() ;
cout <<" \n\nHERE WE WILL USE MULTIPLE INHERITANCE " <<endl <<endl;
hybridcalculater result;
result. arethimaticfunctions(230,8) ;
result. scientificfunctions(15, 9) ;
result. displayarethimaticfunctions() ;
result. displayscientificfunctions() ;

cout <<" THIS WAS THE PRACTICE FOR MULTIPLE INHERITANCE "<<endl;
return 0;}