#include <iostream>
using namespace std;

int main() {
    int A, B, C;
    cout << "Enter 1st number: ";
     cin >> A ;
    cout << "Enter 2nd number: ";
    cin >> B ;
   
    if (A >= B ){
        cout << A <<" is the maximum number" << endl;
    }
    else {
        cout << B <<" is the maximum number" <<endl;
    }

    return 0;
}