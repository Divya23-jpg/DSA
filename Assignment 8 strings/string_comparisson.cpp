/*
Sample Input
aaabbccdsaa
Sample Output
a3b2c2d1s1a2

*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin>>s;
    for(int i=0;i<s.size();){
        char curr=s[i];
        int count=0;
        while(i<s.size() && s[i]==curr){
            count++;
            i++;
            
        }
        cout<<curr<<count;
    }



    return 0;
}
