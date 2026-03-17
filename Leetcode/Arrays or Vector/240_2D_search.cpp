#include<iostream>
#include<vector>
using namespace std;


bool searchMatrix(vector<vector<int>>& mat, int target) {
       int m=mat.size(),n=mat[0].size();
    int r=0,c=n-1;
    while(r<m && c>=0){
        if(target==mat[r][c]){
            return true;
        }
        else if(target<mat[r][c]){
            c--;
        }
        else{
            r++;
        }
    }
    return false;
}

int main(){
    int n, m;
    cin >> n >> m;
    vector<vector<int>> mat(n, vector<int>(m));
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> mat[i][j];
        }
    }
    
    int target;
    cin >> target;

    int target;
    cin>>target;
     if (searchMatrix(mat, target))
        cout << "Found\n";
    else
        cout << "Not Found\n";

  

    return 0;
}