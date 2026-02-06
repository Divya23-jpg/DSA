/*

1 
1 1
1 2 1
1 3 3 1
1 4 6 4 1
1 5 10 10 5 1
1 6 15 20 15 6 1

*/


#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter value::";
    cin>>n;
    for(int i=1;i<=n;i++){
        int val=1;
        for(int j=1;j<=i;j++){
            cout<<val<<" ";
            val=val*(i-j)/j;
        
        }
        cout<<endl;


    }
    return 0;
}