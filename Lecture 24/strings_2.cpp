/*
strings: sequence of characteristics
getline(cin,string_variable_name):sare string line stored in nums
with whitespacing

*/

#include<iostream>
#include<vector>
using  namespace std;
int main(){

    string name={"Divya"}; //string "  ", charachter ' '

    //traversal
    for(int i=0;i<name.size();i++){
        cout<<name[i];
    }
    return 0;
}
