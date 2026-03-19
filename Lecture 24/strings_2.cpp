/*
strings: sequence of characteristics
getline(cin,string_variable_name):sare string line stored in nums
with whitespacing

*/

#include<iostream>
#include<vector>
#include<string>
using  namespace std;
int main(){
    //character strings
    char st[]={'a','b','c','\0'};//due to \0 it created string from char
    cout<<st; //string literal which value cant be change
    cout<<st[1]<<endl; //indexing starts from 0
    // if no charachter present then gives null

    string name={"Hello I am Divya"}; //string "  ", charachter ' '

    //traversal
    for(int i=0;i<name.size();i++){
        cout<<name[i];
    }



    //input from user
    string n;
    cin>>n;
    cout<<n;

    //output with whitespace
    string s;
    getline(cin,s);
    cout<<s<<" ";
    // return 0;

    
}
