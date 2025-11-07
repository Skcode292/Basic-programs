#include<iostream>
#include<string>
using namespace std;

class base1{
     public:
           void greeting(){
           cout <<" Hello how are you"<<endl;
           }
};       
class base2{
     public:
           void greeting(){
           cout <<" kia hal hai "<<endl;
           }
};  

class derived : public base1, public base2 {
    private :
            int a;
    public:
           void greeting() {
               base2::greeting();}
    }; 
class B {
     public:
           void say(){
            cout <<" Hello world " <<endl;
            }
};   
class D : public B{
     private :
           int a;
     public:
          void say(){
          // note if there is not say function  is simple inheritance but if there is a say function of a derived claasasaas well then say of derived call will run in place of base class say
          
            cout <<" Hello my night strive " <<endl;
            }
};   
           
int main() {
cout <<" CONCERT OF AMBIGUITY IN INHERITANCE "<<endl;
cout <<" Ambiguity 1"<<endl;
 base1 base1obj;
 base2 base2obj;
 base1obj. greeting() ;
 base2obj. greeting() ;
cout<<" Now here starts the ambiguity in derived class because one function of same name with in two classes" <<endl<<endl;
derived d1;
d1. greeting() ;
cout <<endl;
cout <<" Ambiguty 2 " <<endl;
cout <<endl;
B b1;
D d11;
 b1. say() ;
 
 d11. say() ;
return 0;}