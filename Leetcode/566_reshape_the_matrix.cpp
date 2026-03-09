#include<iostream>
#include<vector>
 vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int n=mat.size();
        int m= mat[0].size();
        if(n*m != r*c){
            return mat;
        }
        vector <vector<int>> ans(r,vector <int>(c));
        int x=0;
        int y=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                ans[x][y]=mat[i][j];
                y++;
                if(y==c){
                    x++;
                    y=0;
                }
            }
        }
        return ans;
        
    }

int main(){
    vector
}
