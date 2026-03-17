#include <iostream>
#include <climits> 
using namespace std;



//display 2 D array
void matrix(int mat[][100],int n,int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}






int main(){
   
    int n;
    int m;
    cin>>n>>m;
    int mat[100][100];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>mat[i][j];
        }
    }
    matrix(mat,n,m);

    return 0;
}