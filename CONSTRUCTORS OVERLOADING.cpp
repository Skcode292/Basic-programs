#include<iostream>
#include<string>
using namespace std;

class complex
{
      private:
             int a, b;
      public:
            complex(){
             a=0;
             b=0;
             }
            complex(int y) {
             a=0;
             b=y;    
            }
            complex(int x, int y)
            {
                    a=x;
                    b=y;
                          
            }
      void printnumber(){ 
      cout<<"the complex number is"<<a<<"+"<<b<<"i"<<endl;
      }      
};            
int main(){
cout<<"LLet's do some constructors overloading"<<endl;
complex c3;
c3. printnumber();
complex c2(48);
c2. printnumber();

complex c1(40,48);
c1. printnumber();

return 0;}