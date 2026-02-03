/*

Ques 7: 
n = 5 
* * * * *  
*       *
*       *
*       *
* * * * *

*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value  : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        //stars
        for(int j=1;j<=n;j++){
            if(j==1 || j==n || i==1 || i==n){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    
    }
}