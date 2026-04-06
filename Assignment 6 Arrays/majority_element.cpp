/*
Sample Input
3
1 1 2
Sample Output
1
*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    //optimal solution
    // sort(a.begin(),a.end());
    // int freq=1;int ans=a[0];
    // for(int i=0;i<n;i++){
    //     if(a[i]==a[i-1]){
    //         freq++;
    //     }
    //     else{
    //         freq=1;
    //         ans=a[i];
    //     }
    //     if(freq>n/2){
    //         cout<<ans;
    //     }
    // }

    //morens or more optimal solution
    int freq=0,ans=0;
    for(int i=0;i<n;i++){
        if(freq==ans){
            ans=a[i];
        }
        if(ans==a[i]){
            freq++;
        }
        else{
            freq--;
        }
    }
    cout<<ans;

    return 0;

}