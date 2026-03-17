#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> nums={1,2,2,3};
       bool inc;
        bool dec;
        for(int i=1;i<nums.size();i++){
            if(nums[i]>nums[i-1]){
                dec=false;
            }
            else if(nums[i]<nums[i-1]){
                inc=false;
            }
            if(!inc && !dec){
                return false;
            }
        }
        return true;
    // return 0;
}