#include<iostream>
using namespace std;
int main(){
     
   int n;
   cout<<"Enter marks::";
   cin>>n;
   if(n>=90){
    cout<<"The grade is A";
   }
   else if (n>=75 && n<90){
    cout<<"The grade is B";
   }
   else if(n>=60 && n<75){
       cout<<"The grade is C";
   }
   else{
       cout<<"Fail";
   }

    return 0;
}