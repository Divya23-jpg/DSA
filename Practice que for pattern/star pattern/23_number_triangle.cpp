/*
        1 
      1 1 1
    1 1 1 1 1
  1 1 1 1 1 1 1
1 1 1 1 1 1 1 1 1

*/


#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter  a number::";
    cin>>n;
    for(int i=1;i<=n;i++){
        //spaces
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        
        }
        //stars
        for(int j=1;j<=i;j++){
            cout<<"1 ";
        }
        //stars
        for(int j=1;j<i;j++){
            cout<<"1 ";
        }
        cout<<endl;
    }

}