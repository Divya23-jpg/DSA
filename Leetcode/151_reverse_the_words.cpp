/*
Example 1:

Input: s = "the sky is blue"
Output: "blue is sky the"

*/
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s =  "the sky is blue";
    string p=" ";
    for(int i=s.size()-1;i>=0;i++){
        p.append("s[i]");
    }

    for(int i=0;i<p.size();i++){
        cout<<p[i];
    }
        
}