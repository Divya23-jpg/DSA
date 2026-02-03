/*

* * * * * * * * * 
* * * *   * * * *
* * *       * * *
* *           * *
*               *
*               *
* *           * *
* * *       * * *
* * * *   * * * *
* * * * * * * * *




*/



#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter number::";
    cin>>m;
    n=(m+1)/2;
    for(int i=0;i<=n;i++){
        //stars
        for(int j=n-i;j>=0;j--){
            if(j==n){
                continue;
            }
            cout<<"* ";
        }
        // spaces
        for(int j=1;j<=i*2-1;j++){
            cout<<"  ";
        }
        //stars
        for(int j=n-i;j>=0;j--){
            cout<<"* ";
        }
       
        cout<<endl;
    }
    for(int i=n;i>=0;i--){
        //stars
        for(int j=n-i;j>=0;j--){
            if(j==n){
                continue;
            }
            cout<<"* ";
        }
        // spaces
        for(int j=1;j<=i*2-1;j++){
            cout<<"  ";
        }
        //stars
        for(int j=n-i;j>=0;j--){
            cout<<"* ";
        }
       
        cout<<endl;
    }
}