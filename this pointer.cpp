#include<iostream>
#include<string>
using namespace std;

class Sk{
     private :
            int a;
     public :
           Sk& setData(int a){
             this -> a=a;
             return * this ;
             } 
           void getData() {
           cout<<" The value of a is : "<<a<<endl;
           }
};
 // this pointer is used to point the object which invoke the member function 
int main(){
cout<<" SSimple this pointer new concept "<<endl;
Sk a;
a. setData(10). getData();
//a. getData() ;

return 0;
}