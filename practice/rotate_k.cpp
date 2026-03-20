#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void rotet(vector<int> v,int n,int k){
        reverse(v.begin(),v.end());
}
int main(){
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(v[x]);
    }
    for(int i=0;i<n;i++){
        // v.push_back(v[i]);
        cout<<v[i];
    }
    // int k;
    // cin>>k;
   
    // rotet(v,n,k);
}