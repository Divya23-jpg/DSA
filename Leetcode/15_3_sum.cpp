#include<iostream>
#include<vector>
#include<algorithm>
using  namespace std;

 vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector <int>> ans;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-2;i++){
            if(i>0 and nums[i]==nums[i-1]){
                continue;
            }
            int j=i+1;
            int k=n-1;
            while(j<k){
                int sum=nums[i]+nums[j]+nums[k];
                if(sum==0){
                    ans.push_back({nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                    while(j<k and nums[j]==nums[j-1]){
                        j++;
                    }

                }
                else if(sum<0){
                    j++;
                }
                else{
                    k--;
                }
            }
        }
    //    cout<<ans;
        return ans;
        
    }
int main(){
    vector <int> nums= {-1,0,1,2,-1,-4};
    threeSum(nums);

}