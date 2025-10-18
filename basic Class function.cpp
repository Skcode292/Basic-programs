 #include<iostream>
#include<string>
using namespace std;


class flight{

private:
   int a,b, c;
public:
   int d, e;
   
   void setdata(int a1, int b1, int c1);// declaration 
   void getdata(){
   cout<<"The value of  a is "<<a<<" a is private "<<endl;
   cout<<"The value of  b is " <<b<<" b is private "<<endl;
   cout<<"The value of  c is " <<c<<" c is private "<<endl;
   cout<<"The value of  d is " <<d<<" d is public "<<endl;
   cout<<"The value of  e is " <<e<<" e is also public"<<endl; 
   }
   
};

void flight ::setdata(int a1, int b1, int c1){
  a=a1;
  b=b1;
  c=c1;
  }




int main(){
cout <<"Let's move on to classes code\n";
flight saud ;
//saud.a= 777; this will throw an error
saud. d= 50;
saud. e=40;
saud. setdata(20,10,30);
saud. getdata();


return 0;
}