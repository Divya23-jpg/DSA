/*[s,g,d,b,k]
  [0,1,2,3,4]

position of D : 3
index of D : 2


*/
#include<iostream>
using namespace std;
int main(){
  int arr[5]={1,3,5,6,8};
  int n=sizeof(arr)/sizeof(int);
  //1st way
  //for loop using sizeOf()
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
    cout<<endl;
  }
  //2nd way
  // for loop using .size()
  // for(int i=0;i<arr.size();i++){
  //   cout<<a[i]<<" ";
  // }

    return 0;
}