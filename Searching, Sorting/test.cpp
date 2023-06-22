#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

 void merge(vector<int>& nums1, int m, vector<int>& nums2, int n){
    if(n!=0){
        int j=0;
        for(int i=n; i<m; i++){
            nums1[i]=nums2[j];
            j++;
        }
        sort(nums1.begin(), nums1.end());
    }
    //printing final nums1
    for(int i=0; i<m; i++){
        cout<<nums1[i]<<" ";
    }
 } 


int main(){
    vector<int>nums1={1,2,3,0,0,0};
    int m=6;
    vector<int>nums2={2,5,6};
    int n=3;

    merge(nums1,m,nums2,n);
return 0;
}