#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int n,m; //n=row m=col
    cin>>n>>m;
    vector<vector<int>> mat(n,vector<int>(m));
    //input store
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>mat[i][j];
        }
    }
    bool up=true;
    int i=0,j=0;
    int r=0,c=0;
    if (mat.empty() || mat[0].empty()) return {};
    
    int m = mat.size();
    int n = mat[0].size();
    vector<int> result;
    
    for (int s = 0; s <= m + n - 2; ++s) {
        if (s % 2 == 0) {
            int r = min(s, m - 1); 
            int c = s - r;
            while (r >= 0 && c < n) {
                result.push_back(mat[r][c]);
                r--;
                c++;
            }
        } 
        else {
            int c = min(s, n - 1);
            int r = s - c;
            while (c >= 0 && r < m) {
                result.push_back(mat[r][c]);
                r++;
                c--;
            }
        }
    }
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
             cout<<result[i][j];
        }   
    }
// vector<int> ans(m*n);
// while(r<n && c<m){
//     if(up){
//         while(r>0 and c<m-1){
//             ans[i]=mat[r][c];
//             i++;
//             r--;
//             c++;
//         }
//         ans[i]=mat[r][c];
//         i++;
//         if(c==m-1){
//             r++;
//         }
       
//         else{
//             while(c>0 and r<n-1){
//             ans[i]=mat[r][c];
//             i++;
//             r++;
//             c--;
//         }
//         ans[i]=mat[r][c];
//         i++;
//         if(r==m-1){
//             r++;
//         }
//         else{
//             r++;
//         }
            
//     }
//     up=!up;


//     }
   
    
// }
// for(int i=0;i<n;i++){
// for(int j=0;j<m;j++){
//     cout<<ans[i][j];
// }
