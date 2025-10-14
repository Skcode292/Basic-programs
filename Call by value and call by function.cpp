#include<iostream>
#include<string>
using namespace std;

int sum(int a, int b){
int c= a+b;
return c;}
void swap(int a , int b){
int temp=a;
    a=b;
    b=temp;
}
void swappointer(int* a , int* b){
int temp= *a;
    *a = *b;
    *b =temp;
}
int & swaprefrencevar(int &a , int  &b){
int temp= a;
    a = b;
    b =temp;
    return a;
}


int main(){
cout<<"let's do some basic call my value and call by function :\n";
int x= 50,y=25;
cout <<" \nthe sum of x and y is "<<sum(x, y);
cout <<"\ntthe value of x is "<<x<<"\tthe value of y is "<<y<<endl;
cout <<"      let's swap x and y \n";
swap(x, y) ;
cout <<"tthe value of x is "<<x<<"\tthe value of y is "<<y<<endl;
cout<<"now we do the sum again \n";
cout <<"\ntthe value of x is "<<x<<"\tthe value of y is "<<y<<endl;
cout <<"      let's swap x and y using call by reference pointerfunction\n";
swappointer(&x,&y) ;
cout <<"tthe value of x is "<<x<<"\tthe value of y is "<<y<<endl;

cout <<"    \n  let's swap x and y using call by reference variables\n";
swaprefrencevar(x,y) =1035 ;
cout <<"\ntthe value of x is "<<x<<"\tthe value of y is "<<y<<endl;


return 0;



}