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
    long long n;
    cin>>n;
    long long ans=0,place=1;
    if(n==0){
        cout<<5<<endl;
        return 0;
    }
    while(n){
        int k=n%10;
        if(k==0){
            k=5;
        }
        ans=ans+k*place;
        place=place*10; 
        n=n/10;
    }
    cout<<ans;
    return 0;
 
}

