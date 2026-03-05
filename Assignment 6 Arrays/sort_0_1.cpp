/*
Sample Input
7
1 0 0 1 1 0 1

Sample Output
0 0 0 1 1 1 1

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
        for(int j=1;j<n;j++){
            if((a[i]==0)and(a[j]==1)){
                swap(a[i],a[j]);

            }
            
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i];
    }
    return 0;
}