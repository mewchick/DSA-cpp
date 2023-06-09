#include<iostream>
#include<vector>
using namespace std;

int findPivot(vector<int>v){
        int s=0;
        int e=v.size()-1;
        int mid;

        while(s<=e){
            mid=s+(e-s)/2;

            if(v[mid]>v[mid+1]){
                return mid;
            }
            if(v[mid]<v[mid-1]){
                return mid-1;
            }
            if(v[s]>=v[mid]){
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
    }

int main(){
    int ans;
        vector<int>nums={4,5,6,7,9,-5,1,2};
        int target=5;

        int pivot=findPivot(nums);
        cout<<"pivot index="<<pivot;

        int s;
        int e;
        int mid;

        if(target>=nums[0] && target<=nums[pivot]){
            s=0;
            e=pivot;
        }
        else if(target>=nums[pivot+1] && target<=nums[nums.size()-1]){
            s=pivot+1;
            e=nums.size()-1;
        }
        else{
            ans= -1;
        }

        cout<<" s="<<s<<" "<<"e="<<e;

        while(s<=e){
            mid=s+(e-s)/2;
            cout<<" mid="<<mid;

            if(nums[mid]>target){
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }

        cout<<" mid="<<mid;

        if(nums[mid]==target){
            ans= mid;
            cout<<" required index="<<ans;
        }
        else{
            ans= -1;
            cout<<" required index="<<ans;
        }
        
    
return 0;
}