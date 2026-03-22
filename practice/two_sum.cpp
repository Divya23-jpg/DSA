/*

Input: nums = [2,7,11,15], target = 9
Output: [0,1]   
// because nums[0] + nums[1] = 9
*/



#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v={2,7,11,15};
    int target=9;
    int n=v.size();
    int st=0;int end=n-1;
    while(st<end){
        int sum=v[st]+v[end];
        if(sum==target){
            cout<<st<<" "<<end;
            break;

        }
        else if(sum>target){
            
            end--;
        }
        else{

            st++;
        }
       
     

    }
}