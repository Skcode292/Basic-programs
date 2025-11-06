#include<iostream>
#include<string>
using namespace std;

class Bankaccount{
     private:
            int accountnumber;
            float balance;
     public:
        void   setaccountnumber() ;
        void   setbalance() ;
        void   deposit (float amount) ;
        void   withdraw(float amount) ;
        void   getbalance() ;
        void   getaccountnumber();
        void   transferto( Bankaccount&reciver, float amount) ;
};
void Bankaccount :: setaccountnumber() {
      cout <<" Enter you account number \n";
      cin>>accountnumber;
      }
      
void Bankaccount :: getaccountnumber() {
     cout <<" The account  number is  : "<<accountnumber <<endl;
     }
void Bankaccount :: setbalance() {
     cout <<" Enter the amount of your account \n " ;
     cin>>balance;
     }   
void Bankaccount :: getbalance() {
     cout <<" The balance in your account is  : "<< balance;
     }       
void Bankaccount :: deposit(float amount) {
     if (amount <= 0 ) {
     cout<<" INVALID AMOUNT " <<endl;
        }else {
      balance +=amount;
     cout<<" The balance afterdeposit is : "<<balance<<endl;
              }
     }
void Bankaccount :: withdraw(float amount) {
     if (amount > balance) {
     cout<<" INVALID AMOUNT " <<endl;
         }else{
     balance -= amount;
     cout<<" The balance after withdraw is :\n "<<balance<<endl;
     cout <<endl;
     }
     }
void Bankaccount :: transferto( Bankaccount&reciver, float amount) {
    
    if (amount >balance ) {
       cout <<" TRANSFER FAILED : INSUFFICIENT BALANCE! ! "<<endl;
       }else{
     
     balance -= amount ;
    cout <<" The amount transfered : "<< amount <<endl;
     reciver. deposit(amount) ;
     cout <<" TRANSFER SUCCESSFUL " <<endl;
    cout <<" The remaining balance after transfer : " <<balance<<endl;
         
     }
     }
int main(){
cout<<"Question 3 Bankaccount system "<<endl;
Bankaccount saud, sarg;
saud. setaccountnumber() ;
saud. setbalance() ;
saud. getaccountnumber() ;
saud. getbalance() ;
saud. deposit(1000) ;
saud. withdraw (10000) ;
sarg. setaccountnumber() ;
sarg. setbalance() ;
sarg. getaccountnumber() ;
sarg. getbalance() ;
sarg. deposit(10000) ;
sarg. withdraw (10000) ;
cout <<" SAUD ACCOUNT " <<endl;
saud. transferto(sarg, 300) ;
cout <<"SARG ACCOUNT " <<endl;
sarg. transferto(saud, 1679) ;

return 0;
}