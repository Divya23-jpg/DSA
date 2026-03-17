#include <iostream>
#include <climits> 
using namespace std;




void matrix(int mat[][100],int n,int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}

//row wise maximum find
int  rowSum(int mat[][100],int n,int m){
    int sum=INT_MIN;
    for(int i=0;i<n;i++){
        int rsum=0;
        for(int j=0;j<m;j++){
            rsum +=mat[i][j];
          
            
        }
        sum=max(sum,rsum);
        
      
    }
    return  sum;

}
//colum wise max find
int  colSum(int mat[][100],int n,int m){
    int sum=INT_MIN;
    for(int i=0;i<n;i++){
        int csum=0;
        for(int j=0;j<m;j++){
            csum +=mat[j][i];
          
            
        }
        sum=max(sum,csum);
        
      
    }
    return  sum;

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
    // matrix(mat,n,m);
    cout<<rowSum(mat,n,m)<<endl;
    cout<<colSum(mat,n,m)<<endl;
    return 0;
}