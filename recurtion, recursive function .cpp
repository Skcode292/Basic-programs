#include<iostream>
#include<string>
using namespace std;

int factorial(int n){
if(n<=1){
 return n =1 ;}
return n = n*factorial(n-1);}
int Fibonacci(int n){
if(n< 2){
return n;}
else
return Fibonacci(n-1)+Fibonacci(n-2);}

int main(){
int a;
int n;
cout <<"lets recurstion and recursive functions \n";
cout <<"Enter a number :-\n";
cin >> a;
cout <<"The factorial of  " <<a<< "is " <<factorial(a)<<endl;
cout <<"let's try to solve Fibonacci series and learn\n";
cout <<" Enter n to find Fibonacci term :-\n";
cin >>n;
cout <<"the nth (" <<n<<") term is  "<<Fibonacci(n);

return 0;}