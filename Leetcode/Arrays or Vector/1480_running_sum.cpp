/*
Input: nums = [1,2,3,4]
Output: [1,3,6,10]
Explanation: Running sum is obtained as follows: [1, 1+2, 1+2+3, 1+2+3+4].*/


#include<iostream>
#include<vector>
using namespace std;
vector<int> runningSum(vector<int>& nums) {
    int n=nums.size();
    for(int i=1;i<n;i++){
        nums[i]=nums[i]+nums[i-1];

    }

    return nums;
        
}

int main(){
    vector <int> nums={1,2,3,4};
    vector<int> result = runningSum(nums);

    // print the result to verify
    for (int x : result) {
        cout << x << " ";
    }
    return 0;

    

   


   
}