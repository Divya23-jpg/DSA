#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int j = 1; j <= n - i; j++) {
            cout << "  ";
        }

        int val = i;

        // Increasing part of the row
        for (int j = 1; j <= i; j++) {
            cout << val++ << " ";
        }

        // Decreasing part of the row
        val -= 2;
        for (int j = 1; j < i; j++) {
            cout << val-- << " ";
        }

        cout << endl;
    }

    return 0;
}