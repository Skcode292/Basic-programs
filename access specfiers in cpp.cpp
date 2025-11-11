#include<iostream>
#include<string>
using namespace std;

class base {
     protected :
               int a=100;
     private: 
               int b=200;
     public :
               int c=300;
                         
     void display() {
     cout <<"showing output using specfiers " <<endl;
     cout <<a<< "   "<<b <<"   "<<c<<endl;
     }
};    
class derived : public base {
     public:
           void test(){
           cout <<" llet's test aaccess specfiers "<<endl;
           cout <<a <<"   "<<c<<endl;
           }
};     
int main() {
derived  obj;
//obj. a;// it's protected so it can not work
//obj.b;// it's  private so it can not work
obj.c;// it will run as it pubic and can be accesses
obj .display() ;
obj. test() ;
cout<<"SShort answer as private members can not be derived, but protectes can be derived also they become  private in derived class ";

return 0;}