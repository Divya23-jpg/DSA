#include<iostream>
using namespace std;
int main(){
    int n ;
    int m;
    cin>>n>>m;
    int mat[n][m];
   
    //input
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>mat[i][j];
        }
    }
    //output
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<mat[j][i];
        }
    }
   
  
}