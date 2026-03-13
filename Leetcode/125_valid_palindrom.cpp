/*
Example 1:

Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" 
is a palindrome.
*/


#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s = "A man, a plan, a canal: Panama";
    int l=0;
        int r=s.size()-1;
        while(l<r){
            while(l<r and !isalnum(s[l])){
                l++;
            }
            while(l<r and !isalnum(s[r])){
                r--;
            }
            if(tolower(s[l])!=tolower(s[r])){
                return false;
            }
            l++;
            r--;

        }
        return true;


}