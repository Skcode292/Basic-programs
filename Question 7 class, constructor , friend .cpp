#include<iostream>
#include<string>
using namespace std ;

class box {
      private :
            int length;
            int width;
            int height;
      public:
            box() {}
            box(int l, int w, int h) {
            length=l;
            width =w;
            height=h;
            cout<<"Using a parameterized constructor to asign values"<<endl;
            }
      friend int calculatingvolume (const box &b)  ;   
};
 int calculatingvolume( const box &b) {
      cout<<" Using a friend function to calculate volume " <<endl;
      cout<<" Length : " <<b.length<<endl;
      cout<<" width  : " <<b.width<<endl;
      cout<<" height : " <<b.height<<endl;
      
      int volume = b.length * b. width* b. height ;
      cout <<" the volume is : " << volume;
      return volume;} 
int main(){
cout<<" QUESTION 7 , parameterized constructor and friend function "<<endl;

box sk(10, 20,30);

calculatingvolume(sk) ;


return 0;
}