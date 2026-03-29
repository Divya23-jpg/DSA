/*
Sample Input
aaaccbddd
Sample Output
a2c-1b
*/


#include<iostream>
#include<string>
#include <cctype>
using namespace std;

int main(){
    string s;
    cin>>s;
    int dif=0;
    int n=s.size();
    for(int i=0;i<s.size()-1;i++){
        dif=s[i+1]-s[i];
        cout << s[i] << dif;  
    }
    cout<<s[n-1];
   
    return 0;
}
