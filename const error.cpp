#include<isotream>
using namespace std;
int main(){
const int myNum = 24;
cout << myNum;
int myNum = 190 ;/*this will produce assignment error 
because myNum is constant here */
cout << myNum ;
return 0 ;
}