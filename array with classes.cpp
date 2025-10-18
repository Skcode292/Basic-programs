#include<iostream>
#include<string>
using namespace std;

class shop{
 private:
  string itemid[100];
  int itemprice[100];
  int counter;
  
 public:
  void initcounter(void){counter=0;}
  void setprice(void);
  void displayprice(void);

};

void shop :: setprice(void){
  cout<<"Enter the I'd of item(string) With no "<<counter+1<<endl;
  cin>>itemid[counter];
  cout<<"Enter the price of item"<<endl;
  cin>>itemprice[counter];
  counter++;
}  
void shop ::  displayprice(void) {
  for(int i = 0 ; i< counter;i ++) {
  cout <<" The item id " <<itemid[i] <<"with price is " <<itemprice[i]<<endl;
  
  } 
}  
int main(){
shop CSD;
 
cout <<" LLet's try memory accoation for classes\n";
CSD. initcounter() ;
CSD. setprice();
CSD. setprice();
CSD. setprice();
CSD. displayprice();


return 0;}