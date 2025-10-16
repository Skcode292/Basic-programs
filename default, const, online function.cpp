#include<iostream>
#include<string>
using namespace std;

int product(int a, int b){
return a*b;}
int product1(int a, int b){
static int c=0;
c =c+1;
return a*b+c;}
float moneyfactor(int money, float factor= 1.08){
return money*factor;}
float moneyfactor1(const int money, float factor= 1.08){
return money*factor;}

int main(){
int a, b;
cout <<"let's try inline and static functions with basic programs\n";
 cout <<"Enter 2 numbers to find their products \n";
 cin>>a>>b;
 cout <<"the product of a and b is "<<product(a, b)<<endl;
 cout <<"the product of a and b with static c " <<product1(a, b) <<endl;
 cout <<"the product of a and b with static c " <<product1(a, b) <<endl;
 int money = 54760;
 cout<<"llet's do it with default arguments\n ";
 cout<<"if you have "<<money<<"  Rs in your account you will receive  " <<moneyfactor(money)<<"  rupees after one year\n\n";
 cout<<"if you have "<<money<<"  Rs in your account you will receive  " <<moneyfactor1(money)<<"  rupees after one year\n\n";
 cout <<"const used with argument is to help the argument not change a value in program" <<endl ;
 return 0;}
 