#include<iostream>
#include<string>
using namespace std;

class base{
    protected :
           int a=300;
     private:
           int b=200;
     public:
          int c=100;
};
class derived : protected base{
     
   
};
/* 
table for protected 

                  public dervation      private derivation          protected derivation
public members     derived               private derived             protected
private members     not derived           not derived                   not derived
protected members     protected           become    private              protected



*/
int main() {
cout<<"AAccess control in Inheritance "<<endl;

base b1;
derived d1;
//cout<<b1.a;
//cout<<d1.a; can not access because it is protected in both public and protected visibility scope
//cout <<d1.c;// it becomes protected
//cout<<d1.b;// it's private membersso can not be accessed
//cout <<d1.a;//it's already protected
return 0;}