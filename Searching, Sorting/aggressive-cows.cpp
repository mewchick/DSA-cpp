#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool possibleSoln(vector<int>&stalls, int k, int soln){
        int cows=1;
        int pos=0;//placing a cow in 0th index
        for(int i=1; i<stalls.size(); i++){
            if(stalls[i]-stalls[pos]>=soln){
                cows++;
                if(cows>k){
                    return false;
                }
                if(cows==k){
                return true;
        }
                pos=i;//placing another cow at ith position
            }
        }
        
        return false;
    }

int solve(int n, int k, vector<int> &stalls) {
        sort(stalls.begin(), stalls.end());
        
        int s=0;
        int e=stalls[stalls.size()-1]-stalls[0];
        int ans=-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(possibleSoln(stalls, k, mid)){
                ans=mid;
                cout<<"ans="<<ans;
                cout<<endl;
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        return ans;
    }
int main(){
    vector<int>stalls={1,2,4,8,9};
    int k=3;
    int n=5;
    cout<<"final ans="<<solve(n, k, stalls);
return 0;
}