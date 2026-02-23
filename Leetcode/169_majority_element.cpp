#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector <int> nums={3,2,3};
 
    sort(nums.begin(),nums.end());
    int n=nums.size();
    cout<<nums[n/2]; 



      //frequency count
        // int freq=0, ans=0;
        // for(int i =0;i<nums.size();i++){
        //     if(freq==0){
        //         ans=nums[i];
        //     }
        //   if(ans==nums[i]){
        //     freq++;
        //   }
        //   else{
        //     freq--;
        //   }
        // }
        // return ans;
}