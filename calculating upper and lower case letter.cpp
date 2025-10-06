#include<iostream>
#include<string>
using namespace std;

int main(){
char letter;
cout <<"CALCULATING THE UPPER LOWER CASE \n";
cout <<"Enter the letter\n";
cin>> letter;
if(( letter >= 'A')&&(letter <= 'Z'))
cout <<" IT'S UPPER CASE LETTER";
else if ((letter >= 'a') && (letter <= 'z')) 
cout <<"IT'S LOWER CASE";
else if ((letter >= 0) && (letter <= 9))
cout <<"IT'S A DIGIT ";
else
cout <<"IT'S A SPECIAL DIGIT";
return 0;
}