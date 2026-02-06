




#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter value::";
    cin>>n;
    int m=(n+1)/2;
    for(int i=1;i<=m;i++){
        if(i==1){
            cout<<"*";
        }
        //spcaes
        for(int j=1;j<=m-2;j++){
            cout<<"  ";

        }
        //stars


    }

}