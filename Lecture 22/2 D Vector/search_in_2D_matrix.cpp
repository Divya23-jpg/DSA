/*
1  3  5  7
10 11 16 20
23 30 34 60 

LEETCODE 74

# Each row is sorted in non decresing order.
meaning =<next value  
# The first int of each row is greater tghan the last int
of previous row

*/
#include<iostream>
#include<vector>
using namespace std;

bool searchMatrix(vector<vector<int>>& mat, int target) {
        int  i = 0, j = mat[0].size()-1;
        while (i<mat.size() && j>=0){
            if (mat[i][j] == target) return true;
            else if (target>mat[i][j]) i+=1;
            else if (target<mat[i][j]) j-= 1;


        }
        return false;
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
     if (searchMatrix(mat, target))
        cout << "Found\n";
    else
        cout << "Not Found\n";

  

    return 0;
}