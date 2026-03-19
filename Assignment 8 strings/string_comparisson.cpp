/*
Sample Input
aaabbccdsaa
Sample Output
a3b2c2d1s1a2

*/

#include<iostream>
#include<string>
#include <cctype>

using namespace std;
int main(){
    string s="aaabbccdsaa";
    int a=0,b=0,c=0,d=0,ss=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='a'){
            a++;

        }
        else if(s[i]=='b'){
            b++;
        }
        else if(s[i]=='c'){
            c++;
        }
        else if(s[i]=='s'){
            ss++;
            if(ss==1){
                ss=0;

            }
        }
        else{

            d++;
              if(ss==1){
                d=0;

            }

        }

    }
    cout<<"a"<<a<<"b"<<b<<"c"<<c<<"d"<<"s";
    
}