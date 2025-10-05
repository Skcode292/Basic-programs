#include<iostream>
#include<string>
using namespace std;

int main(){
float temp;
cout <<"CALCULATE THE TEMPERATURE \n";
cout <<"Enter the temperature\n";
cin>> temp;
if(temp >= 35.0) 
cout <<" HEAT ALERT!!!";
else if (temp <= 0.0 ) 
cout <<"FREEZING ALERT!!!";
else 
cout <<"NORMAL TEMPERATURE ";
return 0;
}