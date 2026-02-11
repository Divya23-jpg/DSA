/*
input
5433231 
3
output
3
*/
#include<iostream>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    // int poss=1;
    int count=0;
    for(int i=1;i<n;i++){
        int m=n%10;
        if(m==k){
            count++;
        }
        n=n/10;

    }

    
   
    cout<<count;
    return 0;

}