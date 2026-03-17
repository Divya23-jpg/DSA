/*
Input: nums = [-2,-1,-1,1,2,3]
Output: 3
Explanation: There are 3 positive integers and 3 negative integers. The maximum count among them is 3.

Example 2:

Input: nums = [-3,-2,-1,0,0,1,2]
Output: 3

*/

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> nums={-2,-1,-1,1,2,3};
    int pos=0; int neg=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]>0){
            pos++;
        }
        else if(nums[i]<0){
            neg++;
        }
    }
    cout<<max(pos,neg);
   
    
}
