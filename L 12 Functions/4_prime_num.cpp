#include<iostream>
#include<algorithm>
using namespace std;

int prime(int n){
    bool flag=1;
    for(int i=2;i<=n-1;i++){
        if(n%i==0){
     
        flag=0;
        }
   
    }
    if(flag==1){
        cout<< n <<" Prime Number";
    }
    else{
        cout<< n <<" Not Prime Number";
    }
 
}

int main(){
   int n, flag=0;
   cout<<"Enter a number::";
   cin>>n;
    prime(n);

   return 0;
}


