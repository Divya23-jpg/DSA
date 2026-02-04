/*
0
1 1
2 3 5
8 13 21 34
55 89 144 233 377

*/



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
//fibo series= 0 1 1 2 3 5 8 ......
int main(){
    int n,g=0;
    cout<<"Enter a number::";
    cin>>n;
    for(int i=0;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<fibo(g)<<" ";
            g++;

            
        }
        cout<<endl;
       
    }
   
    return 0;


    
}