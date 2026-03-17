/*
1  3  5  7
10 11 16 20
23 30 34 60 

# Each row is sorted in non decresing order.
meaning =<next value  
# The first int of each row is greater tghan the last int
of previous row

*/



#include<iostream>
#include<vector>
using namespace std;
int main(){
    // int m,n;
    // cin>>n>>m;
    vector<vector <int> > mat={{1,2,3},{4,5,6},{7,8,9}};//3x3
    
 

    
    for(int i=0;i<mat.size();i++){
        for(int j=0;j<mat[i].size();j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
  
    return 0;
}