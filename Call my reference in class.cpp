#include<iostream>
#include<string>
using namespace std;


class ak;

class sk {
     private:
            int data1;
     public :
            void setdata(){
            cout <<"Enter the data for sk :" <<endl;
            cin>>data1;
            }      
            void displaydata(){
            cout <<"The data of sk is  : "<<data1<<endl;}
    
            friend void swapdata(sk& ,ak &);
     };              
class ak {
     private:
            int data2;
     public :
            void setdata(){
            cout <<"Enter the data for ak :"<<endl;
            cin>> data2;
            }      
            void displaydata(){
            cout <<"The data of ak is  : "<<data2<<endl;}
     
     friend void swapdata(sk &,ak &);
     };              
                   
  void swapdata(sk &x, ak &y)  {
   int change= x.data1;
       x. data1=y.data2;
       y .data2=change;
       cout<<"the data of sk and ak after swaping is : "<<x.data1 <<"\t"<< y. data2<<endl;
       }  



int main(){
sk cat1;
cat1. setdata();
cat1. displaydata();
ak cat2 ;
cat2. setdata();
cat2. displaydata();
swapdata(cat1,cat2);
cat1. displaydata();
cat2. displaydata();

return 0; }