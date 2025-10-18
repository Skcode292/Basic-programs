#include<iostream>
#include<string>
using namespace std;


class Rafique{

private:
   int pakno;
   double address;
   int age;
public:
   string name, sport;
   
   void setdata(int a1, double b1, int c1);// declaration 
   void getdata(){
   cout<<"\tThe pakno of  Gingi  is "<<pakno<<" pakno is private "<<endl;
   cout<<"\tThe address of  Gingi is " <<address<<" address is private "<<endl;
   cout<<"\tThe age of  Gingi  is " <<age<<" age is private "<<endl;
   cout<<"\tThe Name of  Gingi  is " <<name<<" Name is public "<<endl;
   cout<<"\tThe Sport of  Gingi is " <<sport<<" sport is also public"<<endl; 
   }
   
};

void Rafique ::setdata(int a1, double b1, int c1){
 pakno =a1;
 address=b1;
 age =c1;
  }




int main(){
cout <<"Let's move on to classes code\n\n ";
Rafique saud ;
//saud.pakno= 777; this will throw an error
saud. name= "Gingi";
saud. sport="sleeping";
saud. setdata(18,599,8);
saud. getdata();


return 0;
}