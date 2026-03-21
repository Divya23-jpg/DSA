/*
Input: nums = [1,2,3,4]
Output: [1,3,6,10]
Explanation: Running sum is obtained as follows: [1, 1+2, 1+2+3, 1+2+3+4].*/


#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> nums={1,2,3,4};
    int n=nums.size();
    int sum=0;
    for(int i=0;i<n;i++){
        nums[i]=nums[i]+nums[i-1];

    }
   
}