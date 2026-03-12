/*
character array:

*/

#include<iostream>
#include<vector>
using namespace std;
int main(){
    //1st way
    char a[]={'a','b','c'};
    //size of an array
    int m=sizeof(a)/sizeof(char);
     //Traversing array
    for(int i=0;i<m;i++){
        cout<<a[i];

    }


    //2nd way
    int n;
    cin>>n; //user input
    char arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    //Traversing array
    for(int i=0;i<n;i++){
        cout<<arr[i];

    }

    //vector char
    vector <char> b;

}