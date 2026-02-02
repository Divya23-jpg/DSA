#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // Total rows will be 2*n - 1
    for (int i = 1; i <= 2 * n - 1; i++) {
        // Calculate spaces and the starting number for each row
        int spaces = (i <= n) ? n - i : i - n;
        int cols = (i <= n) ? 2 * i - 1 : 2 * (2 * n - i) - 1;
        int num = (i <= n) ? i : 2 * n - i;

        // Print leading spaces
        for (int s = 1; s <= spaces; s++) {
            cout << "  ";
        }

        // Print increasing numbers
        for (int j = 1; j <= (cols / 2) + 1; j++) {
            cout << num++ << " ";
        }

        // Print decreasing numbers
        num -= 2;
        for (int j = 1; j <= cols / 2; j++) {
            cout << num-- << " ";
        }

        cout << endl;
    }

    return 0;
}