#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number::";
    cin>>n;
    for(int i=1;i<=n;i++){
        //stars
        for(int j=1;j<=i;j++){
            cout<<"* ";

        }
        // //spaces
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        // //spaces
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        //  stars
        for(int j=i;j>=1;j--){
            cout<<"* ";

        }
         cout<<endl;
    }



}