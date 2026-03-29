/*
Input: nums = [1,2,3,1]

Output: true
*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool containsDuplicate(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    int n=nums.size();
    for(int i=0;i<n-1;i++){
        if(nums[i]==nums[i+1]){
            return true;
        }
        else{
            return false;
        }
    }
  
  
}
int main(){
    vector<int> nums={1,2,3,1};
    cout<<containsDuplicate(nums);

}