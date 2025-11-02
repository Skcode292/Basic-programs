#include<iostream>
#include<string>
using namespace std;

//let's create a simple base class employee
class  employee{
     private:
  
  
     public:
     int id;
     float salary;
         employee() {};
         employee(int inpid){
         id=inpid;
         salary = 540000.0;}
};

//let's write the syntax for a drieved class 
//class {{derived class }}name:{{visibility mode}}{{base class name}}
//{ members of class
//}
// default visibility mode is always private  

/* notes
1 default visibility mode is always private
2 public visibility      mode: public members of base class becomes public members of derived class
3 private visibility mode :   public  members of base class become private members of  derived class 



note : private members of a base class can never be inherited by inherited class
making a inherited class  programmer form employee base class 
*/

class programmer : public employee {
     public:
     
          int languages = 9;
          programmer(int inpid):employee(inpid){};
          
          };
int main(){
cout<<"NEXT MAJOR CONCEPT OF OOPS  , INHERITENCE ,simple program about visibility mode \n"<< endl;
employee saud(101),sarg(212);
cout<<saud.salary<<endl;
cout <<sarg.salary<<endl;
programmer  taken8(302);
cout<<taken8.languages<<endl;

cout<<taken8.id;


return 0;
}