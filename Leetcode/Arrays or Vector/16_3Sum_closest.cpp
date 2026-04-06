#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int threeSumClosest(vector<int>& nums, int target) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int result=nums[0]+nums[1]+nums[2];
        for(int i=0;i<n-2;i++){
            int st=i+1;int end=n-1;
            while(st<end){
                int sum=nums[i]+nums[st]+nums[end];
                if(abs(target-sum)<abs(target-result)){
                    result=sum;
                }
                if(sum==target){
                    return target;
                }
                else if(sum<target){
                    st++;
                }
                else{
                    end--;
                }
            }
        }
        return result;
        
    }
int main(){
    vector <int> nums={1,2,1,-4};
    int target=1;
    threeSumClosest(nums,target);
}