/*
Example 1:

Input: command = "G()(al)"
Output: "Goal"
Explanation: The Goal Parser interprets the command as follows:
G -> G
() -> o
(al) -> al
The final concatenated result is "Goal".

*/
#include<iostream>
#include<string>
using namespace std;
int main(){
    string command = "G()(al)";
    string ans="";

    for(int i=0;i<command.size();){
            if(command[i]=='G'){
                ans.append("G");
                i++;
                // command.insert(i, "o");
            }
            else if(command.substr(i,2)=="()"){
                ans.append("o");
                i+=2;
            }
            else if(command.substr(i,4)=="(al)"){
                ans.append("al");
                i+=4;
            }


        }
        for(int i=0;i<command.size();i++){
            cout<<command[i]<<" ";
        }
    return 0;
}