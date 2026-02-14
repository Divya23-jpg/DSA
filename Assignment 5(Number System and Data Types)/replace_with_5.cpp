/*
Given a integer as a input and replace all the '0' with '5' in the integer
Output Format
All zeroes are replaced with 5
Sample Input
102
Sample Output
152

*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int temp=n,rev=0,place=1;
    while(temp>0){
        int m=temp%10;
        if(m==0){
            m=5;
        }
        rev=rev+m*place;
        place=place*10;
        temp=temp/10;
    }
    cout<<rev;
 
}

