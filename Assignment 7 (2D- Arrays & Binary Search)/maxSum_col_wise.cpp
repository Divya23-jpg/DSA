#include <iostream>
#include <climits> 
using namespace std;




void matrix(int mat[][100],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}


//colum wise max find
void  colSum(int mat[][100],int n){
    int sum=INT_MIN;
    int colIndex = -1;

    for(int i=0;i<n;i++){
        int csum=0;
        for(int j=0;j<n;j++){
            csum +=mat[j][i];
        }
        if(csum > sum) {
            sum = csum;
            colIndex = i;  // store column index
        }
    }
    cout<<colIndex+1<<"   "<<sum;
}

int main(){
   
    int n;
    cin>>n;
    int mat[100][100];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>mat[i][j];
        }
    }
    
    colSum(mat,n);
    return 0;
}