#include<iostream>
#include<iomanip>// new header library
using namespace std;

int sk(int s, int k) {
int skx=s+k;
return skx ;}
int main (){
int a= 234,b= 45,c =1111;
int w, p;
// MANIPULATERS IN CPP
cout<< "the value of a without setw  "<<a<<endl;
cout<< "the value of b without setw  "<<b<<endl;
cout<< "the value of c without setw  "<<c<<endl;
cout<< "the value of a with setw  "<<setw(7)<<a<<endl;
cout<< "the value of b with setw  "<<setw(7)<<b<<endl;
cout<< "the value of c with setw  "<<setw(7)<<c<<endl;
cout << "Enter first number\n";
cin>>w;
cout <<"Enter second number\n";
cin>>p;
cout<< "The addition is " << sk( w,  p);
return 0 ;}