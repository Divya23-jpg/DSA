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
   string ans="";
    string p="";
    for(int i=s.size()-1;i>=0;i--){
        if(s[i]==' ' and p.empty()){
            continue;
        }
        if(s[i]!=' '){
            p.push_back(s[i]);
        }
        if(s[i]==' ' and !p.empty()){
            reverse(p.begin(),p.end());
            ans.append(p);
            p.clear();
            ans.push_back(' ');
        }
    }
    if(!p.empty()){
        reverse(p.begin(),p.end());
        ans.append(p);
        p.clear();
    }
    if(ans[ans.size()-1]==' '){
        ans.pop_back();
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    
        
}