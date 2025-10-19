#include<iostream>
#include<string>
using namespace std;

class Employee{
 
private:

int id;
static int count;
public:
 void setid() {
   cout<< "\nEnter the id"<<endl;
   cin >> id;
   count ++;
  }
 void getid(){
   cout<<" \nthe Employee Id is  "<<id<<"   and this is employee no is :" <<count;
   cout<<endl;
  }
 static void  getcount();

};
void Employee :: getcount(){
     cout<<"The value of count is : "<<count <<endl;
    
}

int  Employee ::  count ;


int main(){
Employee saud,ak, sarg;
cout<<" llet's learn about static data members \n";
saud. setid();
saud. getid();
Employee:: getcount();

ak. setid();
ak. getid();
Employee:: getcount();

sarg. setid();
sarg. getid();
Employee::getcount();

return 0;}