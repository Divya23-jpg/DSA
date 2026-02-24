#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> nums={1,2,2,3};
    int n=nums.size();
    for(int i=0;i<nums.size();i++){
        if((nums[i]<nums[i+1]) and(nums[n-1]<nums[n-2])){
            cout<< "True";
        }
        else{
            cout<<"false";
        }
    }
    // return 0;
}