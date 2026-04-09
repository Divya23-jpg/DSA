#include<iostream>
#include<vector>
using namespace std;
//find nums[i] have how many digit and it is even or not
    bool find(int n){
        int cnt=0;
        while(n>0){
            n=n/10;
            cnt++;

        }
        if(cnt%2==0){
            return true;

        }
        return false;

    
}
//if digit is even than ans++ 
int findNumbers(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size();i++){
            if(find(nums[i])){
                ans++;
            }


        }
        return ans;
        
}
int main(){
    vector<int>nums={12,345,2,6,7896};
    findNumbers(nums);

}