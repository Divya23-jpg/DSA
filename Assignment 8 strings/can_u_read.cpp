#include<iostream>
#include<string>
#include <cctype>

using namespace std;
int main(){
    string s;
    cin >> s; 
    string currs="";
    for(char ch:s){
        if(isupper(ch)){
            if(!currs.empty()){
                cout << currs << endl;

                currs="";
            }
            currs+=ch;
        }
        else{
            currs+=ch;

        }


    }
     if (!currs.empty()) {
    cout << currs << endl;
    }

    return 0;



   
}
//