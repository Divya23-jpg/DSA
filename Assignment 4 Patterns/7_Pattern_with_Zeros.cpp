
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter Number::";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            if (j == 1 || j == i) {
                cout << i << "\t";   // print row number at first and last position
            } else {
                cout << 0 << "\t";   // print 0 in between
            }
        }
        cout << endl;
    }

    return 0;
}