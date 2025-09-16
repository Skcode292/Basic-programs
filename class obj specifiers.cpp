#include<iostream>
using namespace std;
class myclass{
public :
int pub =20;
private:
int priv =130;

protected:
 int prot = 150 ; };
 
 int main (){
 myclass specifiers;
 cout << "public :" <<specifiers.pub;
// cout << specifiers.priv; error not access able it's private
 //cout << specifiers. prot ; can not access out side clas
 return 0 ;
 }