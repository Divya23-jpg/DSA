#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector <int> a;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            a.push_back(i);

        }
    }
    cout<<"size::" <<a.size()<<endl;

    if(a.size()>=k){
        cout<<a[k-1];
    }
    cout<<-1;

}

