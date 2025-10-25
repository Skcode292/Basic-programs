#include<iostream>
#include<string>
using namespace std;

class simple{
     private:
            int data1;
            int data2;
            int data3;
     public:
          void printdata(int,int, int);
};
void simple :: printdata(int a, int b=20,int c=10000){
     data1=a;
     data2=b;
     data3=c;
     
     cout<<" \nthe value of simple number with data1, data 2 and data 3 is  "<<data1 <<" and "<<data2<<" and "<<data3;
}
int main(){
cout<<"CConstructors with default arguments"<<endl;
simple s;
s. printdata(10);
return 0;}