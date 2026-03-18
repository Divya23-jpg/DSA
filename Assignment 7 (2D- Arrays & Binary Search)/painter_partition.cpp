#include <iostream>
#include<vector>
using namespace std;




bool canpaint(vector<int> & board,int k,long long m){
    int p=1;
    int t=0;
    for(int i=0;i<board.size();i++){
        if(board[i]+t<=m){
            t+=board[i];

        }
        else{
            p++;
            t=board[i];
        }
    }
    return p<=k;
}
int main(){
    int k,n;
    cin>>k>>n;
    long long maxi=0;
    long long sum=0;
    vector<int> board(n);
    for(int i=0;i<n;i++){
        cin>>board[i];

    }
    for(int i=0;i<n;i++){
        sum+=board[i];
        maxi=max(maxi,(long long )board[i]);


    }
    long long s=maxi;
    long long e=sum;
    int ans=0;
    while(s<=0){
        long long m=s+(e-s)/2;
        if(canpaint(board,k,m)){
            ans=m;
            e=m-1;
        }
        else{
            s=m+1;
        }
    }
    cout<<ans<<endl;
    return 0;


  
}