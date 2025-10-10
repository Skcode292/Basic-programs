#include<iostream>
#include<string>
using namespace std;

typedef struct Store{
string title ;
string author;
double price;

}B;
void bookprice(B books[],int size);
int main(){
B books[3]={{"lordofrings","lars",2300},
            {"avatar","ranger",450},
            {"skfighter","saud",999}, 
           };
int i= 0;
do{
cout<<"BOOK TITLE\t " <<books[i].title<<endl;
cout<<"BOOK AUTHOR\t "  <<books[i].author<<endl;
cout<<"BOOK PRICE \t " <<books[i].price<<endl ;
i++;
}while(i<3) ;
cout<<"Lets print the book with price greater than 1000\n ";
bookprice(books, 3) ;
return 0 ;}
void bookprice(B books[],int size){
for(int s= 0;s < size ;s++){
if (books[s].price > 1000) {
cout <<"the book with greater price\t"<< books[s].author<<endl<< books[s].price <<endl;}
};
};

