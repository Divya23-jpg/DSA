#include<iostream>
#include<vector>
#include<string>
using  namespace std;
int main(){
    string str1="Divya";
    string str2="Kumawat";

    ////concatanation
    string str3=str1+str2; 
    cout<<"Concatanation:"<<str3<<endl;
    //comparison
    cout<<"Comparison:"<<(str1==str2)<<endl;
    //lessthan or greater than
    cout<<"Less than:"<<(str1<str2)<<endl;
    cout<<"Greater Than :"<<(str1>str2)<<endl;
    //length
    cout<<"Length:"<<(str3.length())<<endl;



}