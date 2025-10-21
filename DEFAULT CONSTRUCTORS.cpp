#include<iostream>
#include<string>
using namespace std;

class sksum{
     private:
           int a;
           int b;
     public:
           sksum(void) ; 



};
sksum::sksum(void){
    a= 10;
    b= 700;
    cout<<"the sum of a and b is"<< a+b<<endl;
    }

int main(){
cout<<"LETS MASTER CONSTRUCTORS BASICS  "<<endl;
cout<<"Details of Constructors"<<endl;
cout<<"constructors have the same name as class ";
cout<<"constructors are special member functions and they are automatically invoked when object is created"<<endl;
cout<<"it is declared in public section of class"<<endl;
cout<<"it can take default arguments like (( sk sum(int a = 7) " <<endl;
sksum s1,s2, s3;


return 0 ;}