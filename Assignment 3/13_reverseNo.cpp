#include<iostream>
using namespace std;
int main(){
     
   int n ,i=0;
   cout<<"Enter a number::";
   cin>>n;
   while(n!=0){
    i=(10*i)+(n%10);
    n=n/10;
   }
   cout<<"The reverse of given number is "<<i;
    return 0;
}