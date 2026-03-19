#include<iostream>
#include<string>
#include <cctype>

using namespace std;
int main(){
    string s="IAmACompetitiveProgrammer";
    string currs="";
    for(char ch:s){
        if(isupper(ch)){
            if(!currs.empty()){
                currs+=ch;
                
            }
        }


    }
    


   
}