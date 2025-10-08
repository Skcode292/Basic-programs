#include<iostream>
using namespace std;
int main(){
int s = 4;

int*k = &s;

cout << k<<endl;
cout <<&s;
cout <<" \nthe value of  k "<<*k;
int **w =&k;
cout <<w << endl ;
cout<< **w<< endl;
cout <<*w;


return 0 ;

}