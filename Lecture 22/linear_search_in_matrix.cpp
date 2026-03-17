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


//linear search
int search(int mat[][100],int n,int m,int key){
    int found=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(mat[i][j]==key){
                return 1;
            }
        }
    }
   return 0;
    
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
    int key;
    cin>>key;
    // matrix(mat,n,m);
   if(search(mat, n, m, key))
        cout << "Found";
    else
        cout << "NOT Found";


    return 0;
}