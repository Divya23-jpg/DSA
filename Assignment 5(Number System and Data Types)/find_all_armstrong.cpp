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
int main(){
    int n,m;
    cin>>n>>m;
    for(int i=n;i<=m;i++){
        //total digits 
        int og=i,l=0;
        while(og!=0){
            og=og/10;
            l++;

        }
        // pow to every digits by total digits and sum
        int temp=i;
        int sum=0;
        while(temp!=0){
            int k=temp%10;
            sum=sum+pow(k,l);
            temp=temp/10;   
        }
        if(i==sum){
            cout<<i<<" ";
        }
    }
    return 0;
}