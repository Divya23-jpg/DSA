/*
Sample Input
aaabacB
Sample Output
a
*/
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    char mostFreqChar = s[0];
    int maxCount = 0;

    // For each character in the string
    for (int i = 0; i < s.size(); i++) {
        int count = 0;

        // Count how many times s[i] appears
        for (int j = 0; j < s.size(); j++) {
            if (s[i] == s[j]) {
                count++;
            }
        }

        // Update if this character appears more
        if (count > maxCount) {
            maxCount = count;
            mostFreqChar = s[i];
        }
    }

    cout << mostFreqChar << endl;
    return 0;
}
