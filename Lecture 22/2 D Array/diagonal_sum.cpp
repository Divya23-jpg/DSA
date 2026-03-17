#include<iostream>
using namespace std;

int diagonalSum(int mat[][100],int n){//O(n*n)
    int sum=0;
    for(int i=0;i<n;i++){
        sum +=mat[i][i];  //to  reduce complexity
         if(i!=n-i-1){
            sum += mat[i][n-i-1];
        }
       

    // for(int j=0;j<n;j++){
    //     if(i==j){
    //         sum += mat[i][j];
    //     }
    //     else if(j==n-i-1){
    //         sum += mat[i][j];
    //     }
    // }
}
return sum;



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
   for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<mat[i][j]<<" ";
    }
    cout<<endl;

   }
   cout<<diagonalSum(mat,n);
   return 0;

}