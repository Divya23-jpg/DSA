/*

Output Format
N lines each denoting "Yes" or "No" depending upon whether that car will be allowed on Sunday or Not !


Sample Input
2
12345
12134

Sample Output

Yes
No
*/

#include<iostream>
using namespace std;

int sum(int n){
	int s=0;
	for(int i=0;i<=sizeof(n);i++){
		int k=n%10;
		s=s+k;
		n=n/10;
	}
	return(s);
}


int main() {
	int n;
	cin>>n;
	int su;
	int arr[n]={};
	for(int i=1;i<=n;i++){
		cin>>arr[i];	
	}
	for(int i=1;i<=n;i++){	
		int su=sum(arr[i]);
	}
    // cout<<su;
	for(int i=1;i<=n;i++){	
		int su=sum(arr[i]);
		
		if(su % 3 == 0){
			cout<<"Yes"<<endl;
		}
		else {
			cout<<"No";
		}
	}
	return 0;
}