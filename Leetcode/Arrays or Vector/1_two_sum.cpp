/*

input [2,7,11,15] target =9
output  [0,1]


*/

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> nums={};
    
    int target=18;
    //optimal 
    int st=0;
    int end=nums.size()-1;
    while(st<end){
        int sum=nums[st]+nums[end];
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


  


