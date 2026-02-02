#include<iostream>
using namespace std;
int main(){
    int n=10;
    

    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
         cout<<"  ";}
        for(int j=i;j<=n;j++){
            if(j==10){
                cout<<"0 ";}
            else cout<<j<<" ";}

            for(int j=i;j<=n-1;j++){
                if(j==10){
                    cout<<"0 ";}
                else cout<<j<<" ";}
                for(int j=1;j<=i;j++){
                    cout<<"  ";}
        cout<<endl;
    }

    }