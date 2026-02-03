/*

* * *   * * * 
* *       * *
*           *


*           *
* *       * *
* * *   * * *

*/
#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter the value  : ";
    cin>>m;
    int n=m/2;
    for(int i=0;i<=n;i++){
        //stars
        for(int j=n-i;j>=1;j--){
            cout<<"* ";
        }
        cout<<"  ";
        for(int j=1;j<=i*2;j++){
            cout<<"  ";
        }
        for(int j=n-i;j>=1;j--){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=n;i>=0;i--){
        //stars
        for(int j=n-i;j>=1;j--){
            cout<<"* ";
        }
        cout<<"  ";
        for(int j=1;j<=i*2;j++){
            cout<<"  ";
        }
        for(int j=n-i;j>=1;j--){
            cout<<"* ";
        }
        cout<<endl;
    }
 
}




     

