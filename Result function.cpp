#include<iostream>
#include<string>
using namespace std;
// let's create a student results calculater
typedef struct student{
string name ;
float marks[3] ;
} falcon;


float calculateaverage(float marks[], int size);


int main(){
float avg;
char choice ;
cout <<"let's create a Student Result calculater\t"<<endl;
 falcon s1;
 falcon s2;
  s1. name = "sarg";
 
 do{
 cout <<"ENTER YOUR NAME \n " ;
 cin>>s1.name;
 cout <<"Enter marks of three subject for this student \t \n";
 for(int s= 0 ;s< 3 ;s++){
 cin>> s1.marks[s];}

    avg = calculateaverage(s1.marks,3) ;
   cout <<"the avg makes of \t"<<s1.name<<"\tis\t"<<avg <<endl;
    
 cout <<"Do you want to find the result of another student(Y/ N) \t \n";
 cin>> choice ;
    }while( choice == 'Y' );
    
 
 

return 0;}


 float calculateaverage(float marks[],int size) {
float sum= 0 ;

for(int i= 0; i< size ;i++)
  { sum += marks[i];}
  return sum / size ;}