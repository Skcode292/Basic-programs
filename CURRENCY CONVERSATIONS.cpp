#include<iostream>
#include<string>
using namespace std;
int main(){
int code ;
double amount;
int PKR;
cout <<"HI,IN WHAT CURRENCY YOU WANT TO CONVERSATION ( 1 = USD,2 =EURO, 3 =GBP)\n ";
cin>> code;
if(code== 1) {
cout <<"Enter the amount in PKR\n";
cin>> PKR;
double  USD = 280*PKR;
cout <<"\nTHIS PKR WILL BE THIS IN USD\n";
cout << USD;}

 else if ( code == 2 ) {
cout <<"Enter the amount in PKR\n";
cin >> PKR;
double  EURO= 310*PKR;
cout <<"\nTHIS PKR WILL BE THIS IN EURO\n";
cout << EURO;}
else if ( code == 3) {
cout <<"Enter the amount in PKR\n";
cin >> PKR;
double  GBP= 360*PKR;
cout <<"\nTHIS PKR WILL BE THIS IN GBP\n";
cout << GBP;}
else {
cout <<" INVALID CODE";};

return 0;}
