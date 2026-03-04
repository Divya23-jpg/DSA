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
    int n,i=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int max=a[i];
    for(int i=0;i<n;i++){
        if(max<a[i]){
            max=a[i];

        }
       
        
    }
    cout<<max;
    return 0;
}