#include<iostream>
#include<algorithm>
#include<vector>
using  namespace std;
int main(){
    vector <int> nums={1,2,3,5};
    int n=nums.size();
    for(int i=0;i<n;i++){
        int a=1; 
        int st=0; int next=st+1;
        if(nums[0]>=a){
            st++;


        }
        else{
            if(nums[i]==a+1){
                next++;

            }
            else{
                cout<<a+1;
            }
        }


    }

}