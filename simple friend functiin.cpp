#include<iostream>
#include<string>
using namespace std;
class Y;
class X {
     private:
            int data ;
            
     public:
            void setdata(int value){
                data=value ;}
                
     friend void add(X, Y);           
};

class Y{
       private:
              int num ;
              
       public:
             void setdata(int value ) {
             num=value;}  

       friend void add(X, Y);
};

void add(X o1,Y o2) {
    cout<<"The sum of data of x and y class  is  :"<<o1.data+o2.num;
   
   }                             
int main(){
cout<<"LLETS STUDY MORE ABOUT FRIEND FUNCTIONS "<<endl;
 X a1;
 a1. setdata(40);
 Y b1;
 b1. setdata(30);
 add (a1,b1) ;


return 0;}