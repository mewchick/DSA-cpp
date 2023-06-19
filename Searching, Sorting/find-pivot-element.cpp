#include<iostream>
#include<vector>

using namespace std;

int findPivot(vector<int>v){
    int s=0;
    int e=v.size()-1;
    int mid;

    while(s<=e){
        mid=s+(e-s)/2;
        if(s==e){
            return e;
        }
        if(v[mid]>v[mid+1] && mid+1<=v.size()-1){
            return mid;
        }
        if(v[mid]<v[mid-1] && mid-1>=0){
            return mid-1;
        }
        if(v[s]>v[mid]){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
}

int main(){
     vector<int>v={15,16};//no duplicate element exists in test cases
     int ans=findPivot(v);
     //ans=index of pivot
     cout<<"index of pivot element="<<ans;
return 0;
}