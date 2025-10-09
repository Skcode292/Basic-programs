#include<iostream>
#include<string>
using namespace std;
//syntax of function prototype. 

//type function (argumts);
//let's try acceptable and not acceptable bere;
// int sum(int, int) ----> acceptable
// int sum(int a, b) ----> not acceptable;



//let's  use void opreaters
void g(void);
 int sum(int a, int b);
 
 
int main(){
int num1, num2;
 cout <<"Enter the value of first num 1\n";
 cin>>num1;
 cout <<"Enter the value of second num 2\n";
 cin >>num2;
 cout <<"The sum of num1 and num2 is \t"<<sum(num1,num2);

cout << endl ;
g() ;
 
 return 0 ;}
 int sum(int a, int b){
 int c = a+b ;
 return c; }

void g(){
cout<<"Hello sleep";
}