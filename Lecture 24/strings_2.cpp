/*
strings: sequence of characteristics
getline(cin,string_variable_name):sare string line stored in nums
with whitespacing

*/

#include<iostream>
#include<vector>
using  namespace std;
int main(){
    // string name={"Hello I am Divya"}; //string "  ", charachter ' '

    // //traversal
    // for(int i=0;i<name.size();i++){
    //     cout<<name[i];
    // }



    //input from user
    string n;
    cin>>n;
    cout<<n;

    //output with whitespace
    string s;
    getline(cin,s);
    cout<<s<<" ";
    return 0;

    
}
