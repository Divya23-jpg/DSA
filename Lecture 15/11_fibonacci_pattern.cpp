/*
0
1 1
2 3 5
8 13 21 34
55 89 144 233 377

*/



#include<iostream>
using namespace std;

int fibo(int g){
    //base case
    if(g==0 || g==1){
        return g;
    }
    else{
        //recursion
        return fibo(g-1)+fibo(g-2);
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