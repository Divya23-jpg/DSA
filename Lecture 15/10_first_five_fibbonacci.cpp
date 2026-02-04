#include<iostream>
using namespace std;


int fibo(int n){
    //base case
    if(n==0 || n==1){
        return n;
    }
    else{
        //recursion
        return fibo(n-1)+fibo(n-2);
    }

}
int main(){
    int n;
    cout<<"Enter a number::";
    cin>>n;
    for(int i=0;i<=n;i++){
        cout<<fibo(i);
        cout<<endl;
       
    }
    cout<<" Total Number of fibonacci series of" << n << "is :: "<<fibo(n)<<endl;
    return 0;


    
}