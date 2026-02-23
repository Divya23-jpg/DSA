/*
Example 1:

Input: nums = [1,2,3,4]
Output: [24,12,8,6]
*/

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> nums={1,2,3,4};
    int n=nums.size();
    vector <int> left(n,1);
    vector <int> right(n,1);
    vector <int> ans(n);
   //left 
    for(int i=1;i<n;i++){
        left[i]=left[i-1]*nums[i-1];
        
    }
    //right
    for(int i=n;i>=0;i--){
        right[i]=right[i+1]*nums[i+1];
        
    }
    for(int i=0;i<n;i++){
        ans[i]=left[i]*right[i];
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    return 0;

}