/*Sample Input
4
1 2 3 4
Sample Output
24 12 8 6 */

#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    vector<int> pre(n,1);
    vector<int> suf(n,1);
    vector<int> ans(n,1);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    //prefix
    for(int i=1;i<n;i++){
        pre[i]=pre[i-1]*nums[i-1];
    }
   //suffix
   for(int i=n-2;i>=0;i--){
    suf[i]=suf[i+1]*nums[i+1];
   }
   //ans calulate
    for(int i=0;i<n;i++){
        ans[i]=pre[i]*suf[i];
    }
//display
   for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }


   

}