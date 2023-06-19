#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int removeElement(vector<int>& nums, int val) {
    sort(nums.begin(), nums.end());
    int startIndex=-1;
    int endIndex=-1;

    //to find startIndex
    int s1=0;
    int e1=nums.size()-1;
    while(s1<=e1){
        int mid=s1+(e1-s1)/2;
        if(nums[mid]==val){
            startIndex=mid;
            e1=mid-1;
        }
        else if(nums[mid]>val){
            e1=mid-1;
        }
        else{
            s1=mid+1;
        }
    }

    //to find endIndex
    int s2=0;
    int e2=nums.size()-1;
    while(s2<=e2){
        int mid=s2+(e2-s2)/2;
        if(nums[mid]==val){
            endIndex=mid;
            s2=mid+1;
        }
        else if(nums[mid]>val){
            e2=mid-1;
        }
        else{
            s2=mid+1;
        }
    }
    cout<<"start index="<<startIndex<<endl;
    cout<<"end index="<<endIndex<<endl;

    vector<int>temp;//copy of nums
    for(int i=0; i<nums.size(); i++){
        temp.push_back(nums[i]);
    }

    nums.clear();

    for(int i=0; i<temp.size(); i++){
        if(i<startIndex || i>endIndex){
            nums.push_back(temp[i]);
        }
    }

    cout<<"final nums= ";
    for(int i=0; i<nums.size(); i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    return nums.size();
}

int main(){
    vector<int>nums={2,2,2};
    int val=2;
    cout<<"ans="<<removeElement(nums, val)<<endl;
return 0;
}