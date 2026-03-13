#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s = "abcd";
    string t="abcde";
           char se;
        int freq[26]={0};
        for(int i=0;i<t.size();i++){
           freq[t[i]-'a']++;
        }
        for(int i=0;i<s.size();i++){
           freq[s[i]-'a']--;
        }
        for(int i=0;i<26;i++){
           if(freq[i]!=0){
            se='a'+i;
           }
        }
    
    return se;
}