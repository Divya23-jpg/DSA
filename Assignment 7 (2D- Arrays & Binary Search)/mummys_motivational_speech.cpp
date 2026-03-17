#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    if((n >=100 or n<=4)){
        return 1;
    }
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int flag=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j>i){
                if(arr[i][j]==0){
                    flag++;     
                }
            }
            
        }
    }
    if(flag==0){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    return 0;
}