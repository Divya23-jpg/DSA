/*
inisialization of 2 D array
*/

#include<iostream>

using namespace std;
int main(){
    int array[][4]={   //[4] is always needed its a size of the interior element for each row 
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}

    };
    int g=sizeof(array)/sizeof(int)*sizeof(int);
    int h=sizeof(array[0])/sizeof(int);
    for(int i=0;i<g;i++){
        for(int j=0;j<h;j++){
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }


    // int arr[2][3]={1,2,3,4,5,6};

    // int m,n;
    // cin>>m>>n;
    // int b[m][n]={0};
    // for(int i=0;i<m;i++){
    //     for(int j=0;j<n;j++){
    //         b[i][j]=0;
    //         cout<<b[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    return 0;
}