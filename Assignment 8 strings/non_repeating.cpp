/*

Output Format
For each testcase, print the first non repeating character present in string. Print -1 if there is no non repeating character.


Sample Input
4
codingblocks
abbac
java
ccdd
Sample Output
d
c
j
-1

*/


#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;  // number of test cases
    
    while (t--) {
        string s;
        cin >> s;
        unordered_map<char, int> freq;
        
        // Count frequency of each character
        for (char c : s) {
            freq[c]++;
        }
        
        // Find first non-repeating character
        char ans = '\0';
        for (char c : s) {
            if (freq[c] == 1) {
                ans = c;
                break;
            }
        }
        
        if (ans == '\0')
            cout << -1 << endl;
        else
            cout << ans << endl;
    }
    return 0;
}
