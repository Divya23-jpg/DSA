/*
Problem Statement
- You are given:
- A sorted array of distinct integers.
- A target value.
- You need to:
- Return the index if the target is found.
- If not found, return the index where it would be inserted in order to maintain the sorted sequence.

Example 1:

Input: nums = [1,3,5,6], target = 5
Output: 2
Example 2:

Input: nums = [1,3,5,6], target = 2
Output: 1
Example 3:

Input: nums = [1,3,5,6], target = 7
Output: 4

*/

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector <int> a={1,3,5,6};
//     int target=4;
     
//     int r=1;
//     int len=a.size();
//     // cout<<len;
//     int l=len-1;
//     // cout<<l;
//     for(int i=0;i<4;i++){
//         if(a[i]==target){
//             cout<<i;
//         }
//         else{
//             // r++;
//             if(a[r]>target){
//                 a[r-1]=target;
//                 cout<<r;
//                 break;

//             }
//             r++;
//             if(a[l]<target){
//                 a[l+1]=target;
//                 cout<<l+1;
//                 break;

//             }

            
//         }
//     }
//     return 0;

// }
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> a={1,3,5,6};
    int target=5;
     
    int left=1;
    int right=a.size()-1;
    int mid=right/2;
    while(right<=left){
        if(a[mid]==target){
            cout<<mid;
        }
        else{
            if(a[mid]>target){
                left;
                // mid=len/2;
            }
            else{
                right;
                // mid=len/2;
            }

        }
    }
    cout<<right;
// return 0;

}