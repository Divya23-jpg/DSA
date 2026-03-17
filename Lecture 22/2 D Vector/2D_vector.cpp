#include<iostream>
#include<vector>
using namespace std;
int main(){
    // int m,n;
    // cin>>n>>m;
    vector<vector <int> > mat={{1,2,3},{4,5,6},{7,8,9}};//3x3
    
    /*
    total rows=mat.size()

    colums = ek row  me kitne elements h
    total colums=mat[i].size() */ 

    
    for(int i=0;i<mat.size();i++){
        for(int j=0;j<mat[i].size();j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
  
    return 0;
}