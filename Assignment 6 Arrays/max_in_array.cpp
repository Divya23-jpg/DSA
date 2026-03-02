/*
Sample Input
4
2
8
6
4
Sample Output
8


*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int max=0;
    for(int i=0;i<n;i++){
        if(max>a[i]){
            max=a[i];
            max++;
        }
        // cout<<max;
        
    }
    cout<<max;
    return 0;
}