/*
Sample Input
cbaeicde
Sample Output
3
*/

#include <iostream>
#include <string>
using namespace std;

bool isVowel(char c) {
    return c=='a' || c=='e' || c=='i' || c=='o' || c=='u';
}

int longestGoodSubstring(string s) {
    int maxLen = 0, currLen = 0;
    for (char c : s) {
        if (isVowel(c)) {
            currLen++;
            maxLen = max(maxLen, currLen);
        } else {
            currLen = 0; // reset when consonant appears
        }
    }
    return maxLen;
}

int main() {
    string S;
    cin >> S;
    cout << longestGoodSubstring(S) << endl;
    return 0;
}