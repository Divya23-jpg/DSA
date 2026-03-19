#include<iostream>

#include<string>
#include<algorithm>
using  namespace std;

bool isAlpha(char ch){
    if((ch>='0' && ch<='9') or 
    (tolower(ch)>= 'a' && tolower(ch)<='z')){
        return true;
    }
    return false;
    
}

bool palindrome(string s){
    int st=0;
    int end=s.length()-1;
    while(st<end){
        if (!isAlpha(s[st])){
            st++;
            continue;
        }
        if (!isAlpha(s[end])){
            end--;
            continue;
        }
        if(tolower(s[st])!=tolower(s[end])){
            return false;
            
        }
        
        st++;end--;
    }
    return true;
    

   
    
}
int main(){
    string s="Madam";
    cout<<palindrome(s);
    return 0;
    
}