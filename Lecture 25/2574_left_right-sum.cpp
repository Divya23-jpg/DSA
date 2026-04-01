#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n=nums.size();
        vector<int> ps(n);
        // ps[0]=nums[0];
        for(int i=1;i<nums.size();i++){
            ps[i]=ps[i-1]+nums[i-1];
        }
        vector<int> pr(n);
        // pr[n-1]=nums[n-1];
        for(int i=nums.size()-2;i>=0;i--){
            pr[i]=pr[i+1]+nums[i+1];
        }
        vector<int> ans(n);
        for(int i=0;i<nums.size();i++){
            ans[i]=abs (ps[i]-pr[i]);
            }
        return ans;
    }
};
int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    
    for(int i=0;i<nums.size();i++){
        cin>>nums[i];
    }
}