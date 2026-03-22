/*
Sample Input
abC
Sample Output
ABc


*/
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i] >= 'A' && s[i] <= 'Z' ){
            s[i]=tolower(s[i]);
        }
        else{

            s[i]=toupper(s[i]);
        }
      
    }
    for(int i=0;i<s.size();i++){
        cout<<s[i];
    }
}