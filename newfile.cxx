#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int main() {
 //connecting my file with skout stream
 cout<<"practice for file handling "<<endl;
 ofstream skout("openingthefile.txt");
 string name;
 //creating a string name and entering the string name with user input 
 
 cout<<" Enter your name \n"<<endl;
 cin >>name;
 //writing the string to the file
 skout<< name;
 
skout. close() ;

ifstream skin("openingthefile.txt");
string content;
getline(skin, content);
cout<<"The content of this file is : "<<content ;
skin. close() ;


 return 0;
}