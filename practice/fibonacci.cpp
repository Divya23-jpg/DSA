
/*
- The Fibonacci sequence is a series of numbers where each number is the sum of the two before it:
0,1,1,2,3,5,8,13,21,...- 

*/


#include<iostream>
using namespace std;


int fibo(int n){
    if(n==1 || n==0){
        return n;
    }

    return fibo(n-1)+fibo(n-2);
    

}
int main(){
    int n;
    cin>>n;
    // total of fibonacci
    cout<<fibo(n)<<endl;
    //print fibonacci series
    for(int i=0;i<=n;i++){
        cout<<fibo(i)<<" "<<endl;
    }
    //first five fibonacci
    for(int i=0;i<5;i++){
        cout<<fibo(i)<<" ";
    }
    return 0;
    
}