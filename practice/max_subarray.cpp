#include <iostream>

#include<climits>

using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int maxsum=INT_MIN;
    int cur=0;
    for(int i=0;i<n;i++){
        cur+=a[i];
        maxsum=max(cur,maxsum);
        if(cur<0){
            cur=0;
        }
    }
    cout<<maxsum;
}