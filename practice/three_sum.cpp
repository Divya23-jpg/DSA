/*

Input: nums = [-1,0,1,2,-1,-4]
Output: [0,1]   
// because nums[i] + nums[j]+nums[k] = 0

note: i != j!=k
*/



#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main(){
    vector<int>v={1,0,1,2,-1,-4};
   vector<vector<int>> ans;
    sort(v.begin(),v.end());
    int n=v.size();

    for(int i=0;i<n;i++){
        if(i>0 && v[i]==v[i-1]){
            continue;
        }
        int j=i+1; int k=n-1;
        while(j<k){
            int sum=v[i]+v[j]+v[k];
            if(sum<0){
                j++;
            }
            else if(sum>0){
                k--;
            }
            else{
                ans.push_back({v[i], v[j], v[k]});
                j++;k--;

                while(j<k && v[j]==v[j-1]){
                    j++;
                }
            }

        }
    }
    //we use 2 nested loop because its vector of vector
   for (int i = 0; i < ans.size(); i++) {
    for (int j = 0; j < ans[i].size(); j++) {
        cout << ans[i][j] << " ";
    }
    cout << endl;
}

   
}