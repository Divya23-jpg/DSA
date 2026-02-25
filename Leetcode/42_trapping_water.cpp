#include<iostream>
#include<vector>
using namespace std;


int main(){
    vector <int> height={0,1,0,2,1,0,1,3,2,1,2,1};
    int n=height.size();
            int left=0;int right=n-1,i;
            int ans=0;int rightmax=0;int leftmax=0;
            while(left<right){
                if(height[left]<=height[right]){
                    if(leftmax>=height[left]){
                        ans=ans+leftmax-height[left];
                    }
                    else{
                        leftmax=height[left];
                    }
                    left++;
                }
                else{
                    if(rightmax>=height[right]){
                        ans=ans+rightmax-height[right];
                    }
                    else{
                        rightmax=height[right];
                    }
                    right--;
                }
                
            }
            cout<<ans;
            return 0;
}
