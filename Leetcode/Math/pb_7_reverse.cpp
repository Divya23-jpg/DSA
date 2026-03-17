#include<iostream>
#include<climits>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        int ans=0;
        while(x!=0){
            int n=x%10;
            if((ans>INT_MAX/10) or (ans<INT_MIN/10)){
                return 0;
            }
            ans=ans*10+n;
            x=x/10;
        }
        return ans;
    }
};
int main(){
    int x;
    cin>>x;
    Solution obj;
    cout<<obj.reverse(x);
    return 0;

    
}