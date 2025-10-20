#include<iostream>
#include<string>
using namespace std;

class complex ;
class calculater{
    public: 
     int add(int a, int b){
         return a+b; }

     int sumrealcomplex(complex ,  complex ) ;
     int sumcompcomplex(complex ,  complex ) ;    
};

class complex {

     private:
             int a, b;
             
             
     public:
            void setnumber(int n1, int n2){
             a=n1;
             b=n2;
             }
            void printnumber(){
            cout<<"The number is " <<a <<"+"<<b<<"i"<<endl;
            }
      // it is individually make a function friend of another class
     friend int calculater :: sumrealcomplex(complex ,complex ) ;
     friend int calculater :: sumcompcomplex(complex ,complex ) ;  
     // while class as friend 
     friend class calculater;
};
int calculater :: sumrealcomplex(complex o1,  complex o2 ) {
         return (o1.a +o2.a);
         }
int calculater :: sumcompcomplex(complex o1,  complex o2 ) {
         return (o1.b +o2.b);}
int main(){
cout <<"Lets practice friend class "<<endl;

complex o1,o2;

o1.setnumber(4,7);
o2. setnumber(16,23);

calculater calc ;
 int res = calc.sumrealcomplex(o1, o2);
 int res2 = calc. sumcompcomplex(o1, o2);
 cout <<" The sum of real part of complex number  of o1 and o2   :"<<res <<endl;
 cout <<" The sum of complex part of complex number of o1 and o2   :"<<res2<<endl;
return 0 ;}


/* Properties of friend function
1. it's not a part   of class
2 . it can be declared in both private or public part of class
3 . can be used with out objects
4 . it's  uses the object  as arguments form class 
5 it can not directly accesss members  it need  name, object name and member name 
6 , */