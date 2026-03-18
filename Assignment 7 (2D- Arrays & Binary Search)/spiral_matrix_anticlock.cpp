/*
4 4
11 12 13 14
21 22 23 24
31 32 33 34
41 42 43 44
11, 21, 31, 41, 42, 43, 44, 34, 24, 14, 13, 12, 22, 32, 33, 23, END



*/
#include<iostream>
#include<vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> mat(n, vector<int>(m));

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> mat[i][j];
        }
    }

    int srow = 0, erow = n - 1;
    int scol = 0, ecol = m - 1;
while(srow <= erow && scol <= ecol) {
    // left boundary
    for(int i = srow; i <= erow; i++){
        cout << mat[i][scol] << ", ";
    }

    // bottom boundary
    for(int j = scol + 1; j <= ecol; j++){
        cout << mat[erow][j] << ", ";
    }

    // right boundary
    if(scol < ecol){
        for(int i = erow - 1; i >= srow; i--){
            cout << mat[i][ecol] << ", ";
        }
    }

    // top boundary
    if(srow < erow){
        for(int j = ecol - 1; j > scol; j--){
            cout << mat[srow][j] << ", ";
        }
    }

    srow++;
    erow--;
    scol++;
    ecol--;
}
cout << "END";

    return 0;
}