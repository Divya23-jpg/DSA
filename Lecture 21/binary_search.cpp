#include<iostream>
#include<vector>
using namespace std;
int search(vector<int>& nums, int target) {
        int start=0;
        int end=nums.size()-1;
        while(start<=end){
        int mid=start+(end-start)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]<target){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return -1;
        
        
    }
int main(){
    vector <int> nums={1,2,4,5,6,8,11};
    cout<<search(nums,4);
    return 0;
}