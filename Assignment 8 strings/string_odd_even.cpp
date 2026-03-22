/*
Sample Input
abcg
Sample Output
badf

*/

#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cin>>s;
   for(int i=0;i<s.size();i++){
    int asc=int(s[i]);
    if(asc%2==0){
        s[i]=asc-1;
    }
    else{
        s[i]=asc+1;
    }
   }
   for(int i=0;i<s.size();i++){
        cout<<s[i];
    }
}