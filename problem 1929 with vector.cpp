#include<iostream>
#include<string>
#include<vector>
using namespace std ;
// concatenation of an array;
int main() {
cout <<" concatenation of a  array problem 1929 \n"<<endl;

vector<int>nums={1,2,3};
int n= nums. size();

vector<int>arr2(2*n);




for(int i = 0;i<n;i++) {
 arr2[i]=nums[i];
 arr2[i+n]=nums[i];
 }
 
 for (int i =0;i<2*n;i++){
 cout<<arr2[i]<<"";
 cout <<endl;
}
 
 
 return 0;
}
