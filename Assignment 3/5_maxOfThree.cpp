#include <iostream>
using namespace std;

int main() {
    int A, B, C;
    cout << "Enter 1st number: ";
     cin >> A ;
    cout << "Enter 2nd number: ";
    cin >> B ;
    cout << "Enter 3rd number: ";
    cin >> C ;
    if (A >= B && A >= C) {
        cout << A <<" is the maximum number" << endl;
    }
    else if (B >= A && B >= C) {
        cout << B  <<" is the maximum number"<< endl;
    }
    else {
        cout << C  <<" is the maximum number" <<endl;
    }

    return 0;
}
