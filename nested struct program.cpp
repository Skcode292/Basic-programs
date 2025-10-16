#include<iostream>
#include<string>
using namespace std;

typedef struct date{
int day[3];
int month[3];
int years[3];
}Date;
typedef struct Book{
string title[3];
Date issuedate;}library;

void Printbook(library B1);

int main(){
Date D1={{20     ,   11   , 30 },
         {10     ,   11   ,  5 },
         {2002   ,   2002 ,2007}};
         
 library B1 ={"Sk Fighter" , "Ak Star " , "Sargent"} ;  
 B1. issuedate=D1;
cout <<"let's create A nested loop program  \n\n";
Printbook(B1) ;
return 0;
}

void Printbook(library B1) {
cout <<"THE DATA OF All BOOKS \n";
for(int  i =0; i < 3 ; i ++){
cout<<"TTITLE :~  " <<B1.title[i] << "    With Issue date    "<<B1.issuedate.day[i]<<"/"<<B1.issuedate.month[i]<<"/"<<B1.issuedate.years[i]<<endl<<endl;
}
}