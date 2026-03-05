/*
Sample Input
3
1 1 2
Sample Output
1
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
    for(int i=0;i<n;i++){
        if(a[i]<n/2){
            cout<<a[i];
        }
    }
    return 0;

}