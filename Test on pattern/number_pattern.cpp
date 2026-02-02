#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Number::";
    cin>>n;
    for(int i=1;i<=n;i++){
        //upper left
        //numbers
        for(int j=1;j<=i;j++){
            if(j%2!=0){
                cout<<i<<" ";
            }
            else{
                cout<<2*n-i<<" ";
            }
        }
        //spaces
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        //upper right
        //spaces
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        //numbers
        for(int j=1;j<=i;j++){
            if(j%2==0){
                cout<<i<<" ";
            }
            else{
                cout<<2*n-i<<" ";
            }
        }
        cout<<endl;
    }
    //Lower part
    for(int i=n-1;i>=1;i--){
        //Lower left
        //numbers
        for(int j=1;j<=i;j++){
            if(j%2!=0){
                cout<<i<<" ";
            }
            else{
                cout<<2*n-i<<" ";
            }
        }
        //spaces
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        //Lower right
        //spaces
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        //numbers
        for(int j=1;j<=i;j++){
            if(j%2==0){
                cout<<i<<" ";
            }
            else{
                cout<<2*n-i<<" ";
            }
        }
        cout<<endl;
    }
return 0;
}