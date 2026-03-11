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
    int n=numbers.size();

    for(int i=0;i<n;i++){
        cin>>numbers[i];
    }
    // int target;
    // cin>>target;
    int l=0;
    int r=n-1;
    int mid=l+(r-l)/2;
    cout<<numbers[mid];

    return 0;

}