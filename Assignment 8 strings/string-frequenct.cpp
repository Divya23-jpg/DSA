/*
Sample Input
aaabacB
Sample Output
a*/
// #include<iostream>
// #include<string>

// using namespace std;
// int main(){
//     string s;
//     cin>>s;
//     int fre=0;
//     for(int i=0;i<s.size()/2;i++){
//         for(int j=0;j<s.size();j++){

//             if(s[i]==s[j]){
//                 fre++;
//             }
//         }

//         cout<<fre;
//     }
// }

#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main() {
    string s;
    cin >> s;

    unordered_map<char,int> freq;

    // Count frequencies
    for(char c : s) {
        freq[c]++;
    }

    // Print each character with its frequency
    cout<<freq;
}
