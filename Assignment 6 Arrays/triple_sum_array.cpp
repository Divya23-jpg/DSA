/*
Sample Input
9
5 7 9 1 2 4 6 8 3
10

Sample Output
1, 2 and 7
1, 3 and 6
1, 4 and 5
2, 3 and 5

*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int target;
    cin>>target;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
               
                swap(a[j],a[j+1]);
            }
        }
    }
    for(int i=0;i<n;i++){
         for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if((a[i]+a[j]+a[k]==target)and(a[i] < a[j] and a[j] < a[k])){
                    cout<<a[i]<<", "<<a[j]<<" and "<<a[k];
            }
        }
        
        cout<<endl;
    }
    }
    return 0;
}