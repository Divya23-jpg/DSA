#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

 int missingNumber(vector<int>& nums) {
        int n=nums.size();
        n=n*(n+1)/2;
        int ans=0;
        for(int i=0;i<nums.size();i++){
            ans+=nums[i];
        }
        return n-ans;
    }


int main(){
    vector<int> nums={0,1};
    missingNumber(nums);

    
}