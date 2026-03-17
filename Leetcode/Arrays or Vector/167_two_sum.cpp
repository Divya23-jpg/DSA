/*Example 1:

Input: numbers = [2,7,11,15], target = 9
Output: [1,2]
Explanation: The sum of 2 and 7 is 9. Therefore, index1 = 1, index2 = 2. We return [1, 2].


*/

#include<iostream>
#include<vector>
using namespace std; 

   vector<int> twoSum(vector<int>& numbers, int target) {
    
    int start=0;
    int end=numbers.size()-1;
 
    while(start<end){
        if(numbers[start]+numbers[end]==target){
            return {start+1 , end+1};
        

        }
        else if(numbers[start]+numbers[end]<target){
            start++;

        }
        else if(numbers[start]+numbers[end]>target){
            end--;

        }
        
        
    }
    return {};
        
        
    }
int main(){
    vector <int> numbers={2,7,11,15,18};
    int target=9;
    vector <int> result=twoSum(numbers,target);
     if (!result.empty()) {
        cout << "Indices: " << result[0] << " and " << result[1] << endl;
    } else {
        cout << "No solution found." << endl;
    }

    return 0;

    
   


    
    
    
  

    return 0;

}