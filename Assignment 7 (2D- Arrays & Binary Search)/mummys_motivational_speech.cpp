#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<vector<int>> arr(n, vector<int>(n));

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> arr[i][j];
        }
    }

    bool isLower = true;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(j > i && arr[i][j] != 0){  // above diagonal must be zero
                isLower = false;
                break;
            }
        }
        if(!isLower) break;
    }

    if(isLower){
        cout << "true";
    } else {
        cout << "false";
    }

    return 0;
}