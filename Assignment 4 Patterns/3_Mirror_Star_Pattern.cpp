#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int mid = (n / 2) + 1;

    for (int i = 1; i <= n; i++) {
        int spaces = i <= mid ? mid - i : i - mid;
        int stars = i <= mid ? 2 * i - 1 : 2 * (n - i) + 1;

        for (int j = 1; j <= spaces; j++) {
            cout << "  ";
        }
        for (int j = 1; j <= stars; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}