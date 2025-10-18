#include<iostream>
#include<string>
using namespace std;

class binary{
  string s;
  
  public:
  
   void read(void);
   void chk_bin(void);
   void ones(void);
   void display(void);
};
void binary :: read(void){
   cout <<"Enter a binary number"<<endl;
   cin>>s;
}

void  binary :: chk_bin(void){
    for(int i =0; i< s.length();i ++){
        if(s.at(i)!='0' && s. at(i)!= '1') {
        cout<<"INCORECT BINARY NUMBER";
        return  ;}
    }
}    

void binary :: ones(void){
    for(int i =0; i< s.length();i ++){
       if(s.at(i)== '0'){
         s. at(i) = '1';
       }
       else {
       s. at(i)= '0';
       }
    }
    
}

void binary :: display(void){
    cout<<"Displaying your ones complement"<<endl;
    for(int i =0; i< s.length();i ++){
     cout<<s.at(i)<<endl;
    }

}



int main(){
cout<<"\n OOPs -- Classes and Objects"<<endl;
cout<<"\nC++ is C with structures"<<endl;
cout<<"\nClasses are Sturcture + more(feature) "<<endl;
cout<<"\n structure have limitations : "<<endl;
cout<<"\n1 All members are public "<<endl;
cout<<" \n2 methods can not be defined in structure\n "<<endl;
cout<<"\n Classes can have few public or private members"<<endl;
cout <<"\nClasses can have methods(functions of class) and properties(values or data types like string name int pak no"<<endl;
cout<<"\n structure in C++ are typedef "<<endl;
cout<<"\n you can declare objects right after class declaration "<<endl;
cout<<"\n class{ class code  } saud, object, sk;"<<endl;
cout<<"\n you can not access private variable directly like saud. a-> if a is private member\n\n";

binary b;
b. read();
b. chk_bin();

cout<<"Displaying ones complement"<<endl;

b. ones() ;

b. display() ;

return 0;
}