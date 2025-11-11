#include<iostream>
#include<string>
#include<vector>
using namespace std;


class Book{
     private:
             string title;
             string author;
             float  price;
     public:
           Book() {
           
            
            }
            Book(string t, string a, float p) {
            title = t;
            author = a;
            price = p;
            cout <<"The  Book title : " <<title <<endl;
            cout <<"Author name is  : " <<author<<endl;
            cout <<" Book price is  : " <<price<<endl<<endl;
            }
           Book(const Book &b) {
           title = b. title;
            author = b. author;
            price = b. price;
           
           cout <<" I am calling a deep copy constructor and values " <<endl;
           cout <<"The  Book title : " <<title <<endl;
           cout <<"Author name is  : " <<author<<endl;
           cout <<" Book price is  : " <<price<<endl<<endl;
            }
           
              
};
int main(){
vector<Book>mycollection;
cout <<"QQuestion No 4 , class book with deep copy constructor " <<endl;
 Book b1("think_and_grow_rich", " leonardo",  1560.90) ;
 Book b2("countdown" ,"Oxford", 780.30) ;
 Book b3(b1) ;
 Book b4(b2) ;
 mycollection.push_back(b3) ;
 mycollection.push_back(b4) ;
return 0;}