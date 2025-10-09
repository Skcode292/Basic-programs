#include<iostream>
#include<string>
using namespace std;
//struct Personalportal{
//int pakno ;
//char signature ;
//float salary ;
//};
typedef struct Personalportal{
int pakno ;
char signature ;
float salary;
}pp;
// LET'S LEARN ABOUT UNION
union khan{
int pakno ;
char signature ;
float salary;
};

int main(){
cout <<"using UNION \n";
union khan sk ;
sk. pakno = 11018;
sk.salary=20760;
cout <<sk.pakno <<endl ;
cout <<"so basically it is giving a garbage valley be cause memory is shared in union\n";
cout <<"using struct \n";
struct Personalportal saud ;
saud. pakno = 528292;
saud. signature ='S';
saud. salary = 54760;
cout<<"So let's print the personalportal values of Saud\n";
cout <<"The value is " << saud.pakno << endl;
cout <<"The value is " << saud.signature << endl;
cout <<"The value is " << saud.salary << endl;

cout <<"OOKEY SO NOW WE MOVE TO ENUM\n" ;

enum shift{morning, afternoon,firstnight, secondnight} ;
shift m = morning;
cout <<m <<endl;
shift af = afternoon;
cout << af ;
return 0;
}