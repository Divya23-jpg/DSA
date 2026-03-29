/*
Input: nums1 = [1,2,3,0,0,0], m = 3, 
nums2 = [2,5,6], n = 3
Output: [1,2,2,3,5,6]
*/
#include<iostream>
#include<vector>
using namespace std;
 void merge(vector<int>& A, int m, vector<int>& B, int n) {
    int i=m-1; int j=n-1; int k=m+n-1;
    while(i>=0 && j>=0){
        if(A[i]>=B[j]){
            A[k]=A[i];
            i--;
            k--;
        }
        else{
            A[k]=B[j];
            j--;
            k--;
        }
      
    }
    while(j>=0){
        A[k]=B[j];
        j--;
        k--;
    }
  


}
int main(){
    vector<int> A={ 1,2,3,0,0,0};
    int m=3;
    vector<int> B={2,5,6};
    int n=3;
   merge( A, m, B, n);
   for(int i=0;i<m+n;i++){
    cout<<A[i];
   }
 
    return 0;
    
}