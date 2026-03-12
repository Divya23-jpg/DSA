/*
reorder oF  a numbers or characters
total numbers permutation = m
total ways=m!



Lenography permutation : Dictionary order
*/
#include<iostream>
#include<vector>
using namespace std;
int main(){

    vector <int> nums={2,1,5,4,3,0,0};
    int n=nums.size();
    int index=-1;
    for(int i=n-2;i<=0;i--){
        if(nums[i]<nums[i+1]){
            index=i;
            break;
        }
}
}