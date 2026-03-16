#include<iostream>
using namespace std;
int main(){
    int n ;
    int m;
    cin>>n>>m;
    int mat[n][m];
   
    //input
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>mat[i][j];
        }
    }
    int key;
    cin>>key;
    int found=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(mat[i][j]==key){
                found++;
                
            }
           
        }
    }
    if(found==1){
        cout<<1;
    }
    else{
         cout<<0;

    }
    return 0;
}