#include<iostream>
#include<string>
using namespace std;

typedef struct rectangle{
int width;
int height;
}Rec;
int area(Rec r1);
bool isSquare(Rec r1);
int main(){
cout <<"let's create a Rectangle geometry\n \n";
Rec r1;
Rec r2;
cout<<"Enter the width of the rectangle:\n";
cin>>r1.width;
cout <<"Enter the height of the rrectangle:\n";
cin>>r1.height;
cout<<"The area of rectangle is :   "<<area(r1) ;

cout<<" lets find out if its a square or not \n  ";
isSquare(r1);

return 0;}

int area(Rec r1){
int A= r1. height*r1.width ;
return A;
}

bool isSquare(Rec r1) {
if(r1.width == r1. height){
cout<< endl<<true<<endl;
cout <<"width and height are equal so it's a square \n";
return true;
}else { 
cout <<endl<< false<<endl;
cout <<"width and height are not equal so it's no a square";
return false ;}
}