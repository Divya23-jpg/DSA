/*
Sample Input
aaabbccdsaa
Sample Output
a3b2c2d1s1a2

*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    int n = s.size();

    for (int i = 0; i < n; ) {
        char current = s[i];
        int count = 0;

        // Count consecutive occurrences of current character
        while (i < n && s[i] == current) {
            count++;
            i++;
        }

        // Print character
        cout << current;

        // Print count only if more than 1
        if (count > 1) {
            cout << count;
        }
    }

    return 0;
}
