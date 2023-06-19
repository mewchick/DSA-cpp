#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;

int bs(int x, int s, vector<int>& nums){
    int e=nums.size()-1;
    int mid;

    while(s<=e){
        mid=s+(e-s)/2;
        if(nums[mid]==x){
            return mid;
        }
        else if(nums[mid]>x){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return -1;
}

int findPairs(vector<int>& nums, int k) {
    sort(nums.begin(),nums.end());
    set<pair<int, int>>ans;
    for(int i=0; i<nums.size(); i++){     
        if(bs(nums[i]+k, i+1, nums) != -1){
            ans.insert({nums[i], nums[i]+k});
        }
    }
    return ans.size();
}

int main(){
    vector<int>nums={1,1}; 
    int k=0;   
    int ans=findPairs(nums,k);
    cout<<"ans="<<ans;
return 0;
}