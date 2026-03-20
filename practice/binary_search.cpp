#include<iostream>
using namespace std;
#include<vector>
int main(){
    int n;
    cin>>n;

    vector<int> v;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    int target;
    cin>>target;
    int st=0;
    int end=v.size()-1;
    int found=0;
    while(st<=end){
        int mid=end/2;
        if(v[mid]==target){
            cout<<"target position is::"<<mid;
            found++;
            break;
        }
        else if(v[mid]>target){
            end=mid-1;


        }
        else{
            st=mid+1;
        }

    }
    if(!found){
        cout<<"target not found";

    }
    return 0;

   
    

}