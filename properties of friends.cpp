#include<iostream>
#include<string>
using namespace std;


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
     friend complex sumcomplex(complex o1, complex o2) ;      
};

complex sumcomplex(complex o1, complex o2) {
      complex o3;
      o3. setnumber((o1.a + o2.a),(o1.b+ o2.b)) ;
      return o3;}




int main(){
cout <<"Lets practice friend function in class "<<endl;
complex c1,c2, sum;

c1. setnumber(2,4);
c1. printnumber();

c2. setnumber(3,6);
c2. printnumber();

sum=sumcomplex(c1, c2) ;
sum.printnumber();
return 0;
}

/* Properties of friend function
1. it's not a part   of class
2 . it can be declared in both private or public part of class
3 . can be used with out objects
4 . it's  uses the object  as arguments form class 
5 it can not directly accesss members  it need  name, object name and member name 
6 , */