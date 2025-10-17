#include<iostream>
#include<string>
using namespace std;
int sum(int a, int b){
return a+b;}
int sum(int a, int b, int c){
return a+b+c;}

//Calculate the area of circle
float volume (int c, int b) {
return (3.14)*c*b;}

//Calculate the Rectangular box
int volume(int l, int w, int h) {
return l*w*h;}

//Calculate the circumstances
int volume ( float r) {
return 2*(3.14)*r*r;}
int main(){
int a, b, c,r, l, w, h;
//cout <<" LET'S DO SOME FUNCTION OVERLOADING \n";
//cout <<"The sum of 16 and 18 is  "<<sum(16,18)<<endl;

//cout <<"The sum of 16 ,14 and 20 is "<<sum(16,14,18)<<endl;
cout<< "calculating volume of cylinder plz enter r  "<<endl ;
cin>> r;
cout <<volume(r)<<endl;
cout <<"Calculate a rectangular box enter h, l, w"<<endl;
cin>>h>> w>> l;
cout <<volume(h,w, l) <<endl;
cout <<"ccalculate the area of circle plz enter h and r"<<endl;
cin >>c>> b;
cout <<volume(c,b) <<endl ;
return 0;}
