/*
Sample Input
10
Sample Output
55
Explanation
The 0th fibonnaci is 0 and 1st fibonnaci is 1.
0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, …
*/

#include<iostream>
using namespace std;
int fibo(int n){
    int m;
    if(n==0 or n==1){
        return n;
        
    }
    else{
        m=fibo(n-1)+fibo(n-2);
    }
    return m;
}
int main(){
    int n;
    cin>>n;
    int s=fibo(n);
    cout<<s;
    return 0;
}