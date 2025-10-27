#include<iostream>
#include<string>
using namespace std;

class Bankdeposit{
     private:
            int principal;
            int years;
            float intrestrate;
            float returnvalue;
     public:
           Bankdeposit(){};
           Bankdeposit(int p, int y, float r) ;//if interested rate is in points like 0.04
           Bankdeposit(int p, int y, int r)  ; //if interested rate is in like 10 20 30
           void show()   ;       

};
Bankdeposit :: Bankdeposit(int p, int y, float r){
              principal=p;
              years = y;
              intrestrate=r;
              
              returnvalue = principal;
              for(int i =0 ;i<y;i++){
              
              returnvalue= returnvalue * (1+intrestrate);}

            };
Bankdeposit :: Bankdeposit(int p, int y, int r){
              principal=p;
              years = y;
              intrestrate=float (r)/100;
              
              returnvalue = principal;
              for(int i =0 ;i<y;i++){
              
              returnvalue= returnvalue * (1+intrestrate);}

            };
            
  
void Bankdeposit:: show() {
     cout<<"The principal amount was  "<<principal<<endl;
     cout <<"The return value after  "<<years<<"years";
    cout <<"  is  "<<returnvalue<<endl;}          
int main(){
   Bankdeposit bd1, bd2, bd3;
   int p, y;
   float r;
   int R;
   cout<<"lets study about dynamic constructors working  "<<endl;
   cout<<"Enter the value of p, y and r(in percentage) "<<endl;
   cin>>p>>y>> r;
   bd1 = Bankdeposit ( p,  y, r) ;
   bd1.show ();
   cout<<"Enter the value of p, y and R(in whole nunber) "<<endl;
   cin>>p>>y>> R;
   bd1 = Bankdeposit ( p,  y, R) ;
   bd1.show ();
return 0;}