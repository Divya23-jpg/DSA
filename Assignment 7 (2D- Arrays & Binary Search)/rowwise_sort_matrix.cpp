#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void searchMatrix(vector<vector<int>>& mat, int n,int m) {

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            sort(mat.begin(),mat.end());
            cout<<mat[i][j];
        }
    }
        
}


int main(){
    int n,m;
    cin>>n>>m;
   vector<vector<int>> mat(n, vector<int>(m));

    for(int i=0;i<mat.size();i++){
        for(int j=0;j<mat[i].size();j++){
            cin>>mat[i][j];
        }
    }
    int target;
    cin>>target;
    (searchMatrix(mat,n,m));
   
  

    return 0;
}