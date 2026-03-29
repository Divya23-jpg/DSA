#include<iostream>
#include<vector>
using namespace std;

int singleNonDuplicate(vector<int>& nums) {
    int n=nums.size();
    if(n==1){
        return nums[0];
    }
    int st=0;
    int end=n-1; int mid=st+(end-st)/2;
    
    while(st<=end){
        if(nums[mid-1]!=nums[mid]!=nums[mid+1]){
            return nums[mid];
        }
        if(mid%2==0){
            if(nums[mid-1]==nums[mid]){
                end=mid-1;
            }
            else{
                st=mid+1;
            }
        }
        else{
            if(nums[mid-1]==nums[mid]){
                st=mid+1;
            }
            else{
                end=mid-1;
            }
        }
      
    }
    return -1;
    
        
}
int main(){
   vector<int> nums={3,3,7,7,10,11,11};

   cout<<singleNonDuplicate(nums);
    return 0;


}