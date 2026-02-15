/*
Sample Input
101010

Sample Output
42
*/
#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    cin>>n;
    int sum=0,g=0;
    while(n>0){
        int k=n%10;
        sum+=k*pow(2,g);
        g++;
        n=n/10;
    }
    cout<<sum;
    return 0;

}