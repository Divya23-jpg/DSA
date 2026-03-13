/*

Input: s = "Hello World"
Output: 5
Explanation: The last word is 
"World" with length 5.

*/

#include<iostream>
#include<string>
using namespace std;
int main(){
    string s = "Hello World";
    int l=0;
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]==' ' and l==0){
                continue;
            }
            if(s[i]!=' '){
                l++;
            }
            else{
                break;
            }
        }
        return l;
        
}