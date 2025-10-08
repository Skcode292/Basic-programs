#include<iostream>
#include<string>

using namespace std;
int main(){
//lets make some arrays
// one type of array making
cout<<"ONE WAY OF MAKING ARRAY\n";
int progress[4]={23,45,87,12345};
cout <<progress[0] <<endl;
cout <<progress[1] <<endl;
cout <<progress[2] <<endl;
cout <<progress[3] <<endl;
//second type of making arrays
cout <<"Second way of array making\n";
int progress_two[4];
progress_two[0]= 9;
progress_two[1]= 67;
progress_two[2]= 3920;
progress_two[3]= 16975;

cout <<progress_two[0]<<endl;
cout <<progress_two[1]<<endl;
cout << "lets change the value of an array variable 3  \n";
progress_two[3]= 11018;
cout <<progress_two[2]<<endl;
cout <<progress_two[3]<<endl;
// so let's use for loop for printing array named progress
cout <<"Using for loop for printing progress array \n";
for(int s=0;s<4;s++) {
cout <<"The value of \t"<< s <<"\tis\t" << progress[s]<<endl;}
//let's do the quiz with while loop
cout <<"okey now lets do it with WHILE LOOP"<<endl;
int s= 0;
while (s < 4) {
cout <<"The value of\t" <<s<<"\tis\t"<<progress[s]<< endl;
s++;}

//quiz time again lets do it with DO WHILE LOOP
cout<<" OKEY BOYS LETS DO IT WITH DO WHILE LOOP BOYS"<<endl;
int k= 0 ;
do{
cout <<"The value of\t" <<k<<"\tis\t"<<progress_two[k]<< endl;
k++;
}while(  k <4);
// NOW POINTERS AND ARRAYS 

cout <<"NOW LETS USE POINTERS AND ARRAYS TOGETHER \n";
int* p = progress ;
cout <<"The value of *p      is " <<*p <<endl;
cout <<"The value of *(p+1)  is " <<*(p+1) <<endl;
cout <<"The value of *(p+2)  is " <<*(p+2) <<endl;
cout <<"The value of *(p+3)  is " <<*(p+3) <<endl;
return 0;}