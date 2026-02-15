/*
Sample Input
400
1000
Sample Output
407

Take the following as input.

A number (N1)
A number (N2)
Write a function which prints all armstrong numbers between N1 and N2 (inclusive).

371 is an Armstrong number as 371 = 3^3 + 7^3 + 1^3

*/

#include<iostream>
#include<cmath>
using namespace std;
int armstrong(int n){
    int sum=0;
        int temp=n;
        while(temp>0){

            int k=temp%10;
            sum=sum+k*k*k;
            temp=temp/10;
        }
        if(sum==n){
            cout<<n;
        }
        return sum;
}
int main(){
    int n,m;
    cin>>n>>m;
      //calculate total digit in n
      for(int i=n;i<=m;i++){
        int og=i,l=0;
        
        while(og!=0){
            og=og/10;
            l++;
        }
        armstrong(i);

    }
    return 0;
}