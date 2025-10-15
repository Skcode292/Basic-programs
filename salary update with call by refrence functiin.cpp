#include<iostream>
#include<string>
using namespace std;

typedef struct Employee{
string name;
double salary;
int bonus;}Airmen;

void applybonus(Airmen &a1);

int main(){
Airmen a1;
a1.name ="nova";
a1.salary = 38000;
 a1.bonus = 1620;
cout <<"let's create Employe Salary update program\n";

cout<<"   let's use this function ";
applybonus(a1);
return 0;
}

void applybonus(Airmen &a1) {
double total = a1. salary + a1. bonus;
cout << total;}