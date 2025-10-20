#include<iostream>
using namespace std;

int main(){
int n ;
cout <<"PRIME NUMBER FUNCTION"<<endl;
cout <<" Enter a number : \n";
cin >> n;

bool prime=true;

if(n<1) {bool prime = false;
 } 
 else
 for(int i = 2;i<n;i++){
   if(n%i==0) {
     prime =false;
   break;
   }
   }
   
 if(prime)
 {cout <<n<<" is a prime number ";}
 else 
 {cout<<n<< "iis not a prime number";
 }
 
 
 return 0;
   }