#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector <int> nums={3,2,3};
 
    sort(nums.begin(),nums.end());
    int n=nums.size();
    cout<<nums[n/2]; 

}