/*

input [2,7,11,15] target =9
output  [0,1]


*/

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> a={2,7,11,15};
    
    int target=18;
    for(int i=0;i<a.size();i++){
        for(int j=i+1;j<a.size();j++){
            if(a[i]+a[j]==target){
                cout<<i<<" "<<j;
            }
            // else
            // {
            //     cout<<"Not found"<<endl;
            // }
        }
        


    }


    

}


  


