#include<iostream>
using namespace std;
int main(){
    int n,count=1;
    cout<<"Enter a number::";
    cin>>n;
    for(int i=1;i<=n;i++){
        //spaces
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        //stars
        // for(int j=1;j<=i;j++){
        //     cout<<j<<" ";
           
        // }
        //stars
        for(int j=1;j<i;j++){
            
            cout<<j<<" ";
            
        }
        cout<<endl;
    }
} 