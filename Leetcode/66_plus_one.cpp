/*
Input: digits = [1,2,3]
Output: [1,2,4]
*/
#include<iostream>
#include<vector>
using namespace std;

    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();

        
        for (int i = n - 1; i >= 0; i--) {
            if (digits[i] < 9) {
                digits[i]++;
                return digits;
            }
            digits[i] = 0;
        }

        
        digits.insert(digits.begin(), 1);
        return digits;
    }

    
int main(){
    vector <int> digits={1,2,3};
    plusOne(digits);
    for(int i=0;i<digits.size();i++){
        cout<<digits[i]<<" ";
    }
    return 0;
}

   

        
    


