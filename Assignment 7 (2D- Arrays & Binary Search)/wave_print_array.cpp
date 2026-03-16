/*
4 4
11 12 13 14
21 22 23 24
31 32 33 34
41 42 43 44

11, 12, 13, 14, 24, 23, 22,
21, 31, 32, 33, 34, 44, 43, 42, 41, END
*/



#include<iostream>
using namespace std;
int main(){
    int n ;
    
    cin>>n;
    int mat[n][n];
   
    //input
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>mat[i][j];
        }
    }
    //output
    for(int i=0;i<n;i++){
        for(int j=n-1;j>=0;j--){
            cout<<mat[i][j]<<",";
        }
        // cout<<endl;/
    }
    cout<<"END";
   
  
}