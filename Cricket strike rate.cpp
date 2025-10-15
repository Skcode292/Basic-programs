#include<iostream>
#include<string>
using namespace std;

typedef struct team{
string name[3];
int runs[3];
int balls[3];}players;

float strikerate(players p1);

int main(){

players p1={{"Babar","ShahidAfridi","Kevinpeterson"},
             {104   ,     93       , 89   },
              {72   ,    43        , 80  }};
              
cout<<"let's create a function to display batsman strike rate:\n";
cout <<"NAME  RUNS AND BALL FACED BY PLAYERS\n";
strikerate( p1) ;
return 0;}


float strikerate(players p1){
for(int i =0 ;i < 3 ;i ++){
cout<< p1.name[i] <<"-score-"<<p1.runs[i]<<"-of-"<<p1.balls[i] <<" balls"<<" with strike Rate "<<(p1.runs[i]/p1.balls[i] ) *100<< endl<<endl;
}
}
