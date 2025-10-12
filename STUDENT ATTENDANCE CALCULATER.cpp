#include<iostream>
#include<string>
using namespace std;

typedef struct student{
string name ;
float totaldays;
float  presentdays;
}S;
float percent;

float studentattendence (S s1) ;

int main()
{ 
S s1;
S s2;

cout<<"lets create a student attendance calculater\n";
cout <<"Enter the  name of first student \n";
cin>>s1.name;
cout <<"Enter present days of this student\n ";
cin>>s1.presentdays;
cout<<"Enter total days\n";
cin>>s1.totaldays;
float percent=studentattendence ( s1) ;
cout <<"the student attendance is \n"<<studentattendence(s1) <<"%";
cout << "\nlets create an array to save and display a list of eligible students";
string eligiblelist[10];
int eligiblecount =0;
if(percent>=75) {
eligiblelist[eligiblecount]= s1. name;
eligiblecount ++;
}
for(int i =0;i<eligiblecount ;i ++) 
{cout <<endl<<i+1 <<"\n."<<eligiblelist[i] <<endl;}

 return 0;
}
float studentattendence (S s1) 
{ 
 float percent = ((float) s1. presentdays/s1.totaldays) * 100;
cout << percent<<"%"<<endl ;
if(percent >= 75 ) {
cout <<"this student is eligible with attendance \t\n"; 
}
else{
cout<< "this student is not eligible with attendance \t"; };
return percent;
}


    