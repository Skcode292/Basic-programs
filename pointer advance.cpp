#include<iostream>
#include<string>
using namespace std;
// learn pointers again

int main (){
cout <<"learning pointers again with details"<<endl;
int sk = 100;
int*islamabad = &sk;
 *islamabad =199999;


cout <<" the value of sk in islamabad is : "<<*(islamabad) <<endl;
// new keyword ( just used to  allocate memory dynamically means entering value 
int * p= new int(200100) ;

cout <<" the value at address p is : "<<*(p) <<endl;
cout <<" this time we used dynamic memory allocation above " << endl;

cout <<" llet's use pointers to allocate a block of memory means  more variable to gather "<<endl;

float * arraysk= new float[3]{12.33, 13.78,87.79};

cout <<"TThe Value of arraysk[0] is : "<<arraysk[0]<<endl;
cout <<"TThe Value of arraysk[1] is : "<<arraysk[1]<<endl;
cout <<"TThe Value of arraysk[2] is : "<<arraysk[2]<<endl;
int * arrayak= new int[3];
arrayak[0]=10110161;
arrayak[1]=99999991;
arrayak[2]=10675831;
cout <<"TThe Value of arrayak[0] is : "<<arrayak[0]<<endl;
cout <<"TThe Value of arrayak[1] is : "<<arrayak[1]<<endl;
cout <<"TThe Value of arrayak[2] is : "<<arrayak[2]<<endl;
delete arrayak;
delete p;
delete[] arraysk;
return 0;}