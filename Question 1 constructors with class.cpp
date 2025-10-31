#include<iostream>
#include<string>
using namespace std;

class product{
     private:
          int productid;
          string productname;
          int productprice;
     public:
           product(){
           cout <<"Enter product id , name and price respectively  : "<<endl;
               cin >>productid>>productname>>productprice;
           } ;
           product(int a, string b, int c ) {
                productid =a ;
                productname =b;
                productprice =c ;
                  
               
               }
          void displayproduct(){
           cout <<"Product id : "<<productid<<endl;
           cout <<"Product name : "<<productname<<endl;
           cout <<"Product price : "<<productprice<<endl;
           cout <<endl;
           }    
};

int main () {
cout<<" Question 1 :WRITE A CLASS WITH CONSTRUCTORS WITH GIVEN PERIMETERS :) "<<endl;
product p1, p2, p3 ;
p1. displayproduct();

p2. displayproduct();
p3. displayproduct();


return 0;
}          