/*
The first k elements of nums should contain the unique numbers in sorted order.
The remaining elements beyond index k - 1 can be ignored.


Input: nums = [1,1,2]
Output: 2, nums = [1,2,_]
Explanation: Your function should return k = 2, 
with the first two elements of nums being 1 and 2 respectively.
It does not matter what you leave beyond the returned
k (hence they are underscores).

*/
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> nums={0,0,1,1,1,2,2,3,3,4};
    int unique=0;
    for(int i=1;i<nums.size();i++){
        if(nums[i]!=nums[unique]){
            unique++;
            nums[unique]=nums[i];
        }
       
    }
    cout<<unique+1;

}