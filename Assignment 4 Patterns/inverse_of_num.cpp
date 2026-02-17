/*

Write a function that returns its inverse, where inverse is defined as follows

Inverse of 32145 is 12543. In 32145, “5” is at 1st place, therefore in 12543, “1” is at 5th place; in 32145,
 “4” is at 2nd place, therefore in 12543, “2” is at 4th place.


 num=[3 2 1 4 5]
 pos=[5 4 3 2 1]

 after inverse

 pos=[12543]
 num=[54321]

 input=[3 2 1 4 5]
 output =[1 2 5 4 3]
*/

#include <iostream>
using namespace std;
#include<vector>
vector <int> convert(int n){
    vector <int> number;
    while(n!=0){
        int k=n%10;
        number.push_back(k);
        n=n/10;
    
    }
    return number;
}


int main(){
    int n;
    cin>>n;
    vector <int> num=convert(n);
    vector <int> ans(num.size()+1);
    for(int i=0;i<num.size();i++){
        ans[num[i]]=i+1;
    }
    for(int i=num.size();i>=1;i--){
        cout<<ans[i];

    }
    return 0;
}