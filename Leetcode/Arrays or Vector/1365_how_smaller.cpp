#include<iostream>
#include<vector>
using namespace std;
//count how many number smaller than current number
int small(vector<int>& nums,int n){
        int cnt=0;
        for(int i=0;i<nums.size();i++)
        if(n>nums[i]){
            cnt++;
        }
        return cnt;
    
}
//store numbers in ans 
vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n,0);
        for(int i=0;i<n;i++){
            ans[i]=small(nums,nums[i]);

        }
        return ans;

}

int main(){
    vector<int>nums={8,1,2,2,3};
    smallerNumbersThanCurrent(nums);
}