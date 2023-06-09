#include<iostream>
#include<vector>
using namespace std;

//array should consists of numbers from [1,N]
//but one number is missing, find the number
//array should be sorted

int missing(vector<int>v){
    int s=0;
    int e=v.size()-1;
    int mid;
    int ans;
    
    while(s<=e){
        mid=s+(e-s)/2;
        if(v[mid]-mid==1){
            s=mid+1;
        }
        else{
            ans=v[mid];
            e=mid-1;
        }
    }
    return ans-1;
}

int main(){
    vector<int>v={1,3,4,5,6,7,8};
    cout<<"missing number="<<missing(v);

return 0;
}