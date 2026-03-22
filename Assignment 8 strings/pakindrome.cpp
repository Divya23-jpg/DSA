/*
Sample Input
abba
Sample Output
true
*/

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;




int main(){
    string s;
    cin>>s;
    int st=0; int end=s.size()-1;
    int f=1;
    reverse(s.begin(), s.end());
    while(st<end){
        if(s[st]!=s[end])
        {
            f=0;
            break;
        }
        st++;
        end--;

       
    }
    if(f==1){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
  

   
}