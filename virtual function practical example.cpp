#include<iostream>
#include<string>
#include<cstring>
using namespace std;

class CWH{
     protected:
              string title;
              float rating;
     public:
            CWH(string s, float r) {
               title= s ;
               rating = r;
               
               }
            virtual void display() {}   ;
            
};  

class CWHvideo:public CWH {
     private:
            float videolength;
     public:
           CWHvideo(string s, float r, float vl) :CWH(s, r), videolength(vl){}
           // this above is initiatling list 
           
           void display() {
           cout<<" This is an amazing video with title :"<<title<<endl;
           cout<<" Rating :"<<rating<<" out of 5 stars " <<endl;
           cout<<" Length of this video is :"<<videolength<<" minutes "<<endl;
           }
};  
class CWHtext:public CWH {
     private:
            int words;
     public:
           CWHtext(string s, float r, int w) :CWH(s, r) {
           words=w;
           } 
     void display() {
           cout<<"\n This is an amazing text tutorial with\t title : "<<title<<endl;
           cout<<" Rating of text tutorial :"<<rating<<" out of \t5 stars "<<endl;
           cout<<" word Length of thisttext tutorial is :"<<words<<" words"<<endl;
           }      
};                  
                
int main () {
cout<<" Importance of virtual function practical example " <<endl;
//CWHvideo v1("virtual function concept " , 4.3,28.49) ;
//v1. display () ;
string title;
float rating, vl;
int words;

// let's used video derived class 
title = "virtual function concept video ";
rating = 4.3;
vl =21.89;
CWHvideo video1(title, rating, vl) ;
//video1. display() ;
// let's used text derived class 
title = "virtual function concept text ";
rating = 4.233;
words=1350;
CWHtext text1(title, rating, words) ;
//text1. display () ;

CWH *tuts[2];
tuts[0] = & video1;
tuts[1] = & text1;

// now displaying using pointeer
tuts[0] -> display();
tuts[1] -> display ();

return 0;
}
// Rules for virtual function
/*
 1 .virtual function  can not be static 
 2 .virtual function can be used using object pointer
 3 .virtual function can be friend of another class
 4 .virtual function might  not be used in class ( as above in base class display () is empty
 5 .if a virtual function is defined in base class  there nonneed to defineiit in  derived class
*/ 