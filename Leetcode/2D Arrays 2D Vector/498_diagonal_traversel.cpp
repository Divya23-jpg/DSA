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
    int i=0;
    int r=0,c=0;
    vector<int> ans(m*n);
    while(r<n && c<m){
        if(up){
            while(r>0 and c<m-1){
                
            }
        }
    }
}