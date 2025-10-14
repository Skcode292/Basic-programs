#include<iostream>
#include<string>
using namespace std;


typedef struct laptop{
string brand[5];
double price[5];
bool istouchscreen[5];
}lap;

bool istouchscreen(lap l1, int size) ;
int main(){
cout <<" let's create a Laptop price analyzer::\n\n";
lap l1={{"HP","Del","ICORE","TELEGRAM","NOVA"}
        ,{1350,1750 ,1200   ,2000      ,5000  },
        };
istouchscreen( l1, 5) ;
return 0 ;
}
bool istouchscreen(lap l1, int size) {
 bool found = false;
for(int i = 0; i <size ; i++){
 if (l1.price[i] <= 1500){
 cout <<l1.brand[i]<< "  is affordable \n";}
 found =true ;
 };

return found;}
