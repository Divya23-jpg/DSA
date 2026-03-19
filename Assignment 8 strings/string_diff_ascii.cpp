/*
Sample Input
acb
Sample Output
a2c-1b
*/


#include<iostream>
#include<string>
#include <cctype>
using namespace std;

int main(){
    string s;
    int minus=0;
    cin>>s;
    for(int i=0;i<s.length();i++){
        static_cast<int>(s[i]);//converts the character into its integer ASCII code.
        minus=s[i+1]-s[i];
        cout<<s[i];
        
        
    }
    return 0;
}