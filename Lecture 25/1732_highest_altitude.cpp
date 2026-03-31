#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;



int largestAltitude(vector<int>& gain) {
    int cur_alt=0; int max_alt=0;
    for(int i=0;i<gain.size();i++){
        cur_alt+=gain[i];
        max_alt=max(max_alt,cur_alt);

      


    }
    return max_alt;


        
}
int main(){
    int n;
    cin>>n;
    vector<int> gain(n);

    for(int i=0;i<n;i++){
        cin>>gain[i];
    }
    cout<<largestAltitude(gain);

}