/*Example 1:

Input: numbers = [2,7,11,15], target = 9
Output: [1,2]
Explanation: The sum of 2 and 7 is 9. Therefore, index1 = 1, index2 = 2. We return [1, 2].


*/

#include<iostream>
#include<vector>
using namespace std; 
int main(){
    vector <int> numbers={2,7,11,15,18};
    vector <int> ans;
    int n=numbers.size();

    // for(int i=0;i<n;i++){
    //     cout<<numbers[i];
    // }
    int target;
    cin>>target;
   
    for(int i=0;i<n-1;i++){
        if(numbers[i]+numbers[i+1]==target){
            ans.push_back(i);
            ans.push_back(i+1);
        }
      
    }
   
    for(int i=0;i<n-1;i++){
        cout<<ans[i]<<" ";
    }
    
    
  

    return 0;

}