#include<iostream>
#include<string>
using namespace std;

typedef struct movies{
  string title[5];
  float movierating[5];
  int release_year[5];
  }cinema;
  cinema m1;
  void best_rating( movies m1,int size );
int main()
{ cout <<"Let's create a Movie Rating Program\n";
cout <<"Enter the Names of movies and there rating and release year:- \n\n";
for(int i = 0 ;i < 5 ; i++){
cout<<"Movie --";
cin>>m1. title[i] ;
cout << "rating  --" ;
cin>> m1.movierating[i] ;
cout <<"Release year --";
cin>> m1. release_year[5];
cout <<endl;}
cout <<" movies ----\n";
best_rating( m1, 5);
 return 0 ;
 
}
void  best_rating( movies m1,int size)
{cout<<"\n Movie ratings --\n";
for (int s=0; s< size;s++) 
{cout<<m1.title[s]<<" with rating " << m1. movierating[s];
cout <<endl;
 }; 
 float best= m1. movierating[0];
 int bestindex = 0;
 for(int s=0;s<size;s++) {
 if( m1. movierating[s]> best ) {
 best=m1.movierating[s];
 bestindex=s;
 };
  
 };
 cout <<" THE BEST RATING MOVIE "<<m1.title [bestindex] << "with rating "<<best;
 
 };
