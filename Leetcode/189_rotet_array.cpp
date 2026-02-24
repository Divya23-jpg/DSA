/*

Given an integer array nums, rotate the array to the right by k steps,
where k is non-negative.


Example 1:

Input: nums = [1,2,3,4,5,6,7], k = 3
Output: [5,6,7,1,2,3,4]
Explanation:
rotate 1 steps to the right: [7,1,2,3,4,5,6]
rotate 2 steps to the right: [6,7,1,2,3,4,5]
rotate 3 steps to the right: [5,6,7,1,2,3,4]


*/
#include<iostream>
#include<algorithm>
#include<vector>
using  namespace std;
int main(){
    vector <int> nums={};
     int n=nums.size();
        int k=k%n;
        //poora array reverse
        reverse(nums.begin(),nums.end());
        //left reverse
        reverse(nums.begin(),nums.begin()+k);
        //right reverse
        reverse(nums.begin()+k,nums.end());
       
}
