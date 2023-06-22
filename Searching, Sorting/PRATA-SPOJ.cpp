#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool possibleSoln(vector<int>cooks, int p, int l, int soln){
    int pratas=0;
    
    for(int i=0; i<l; i++){
        int time=0;
        int multiplier=1;
        while(time+cooks[i]*multiplier<=soln){
            time+=cooks[i]*multiplier;
            multiplier++;
            pratas++;
        }
        if (pratas>=p){
            return true;
        }
        else{
            continue;
        }
    }
    return false;
}

int main(){
    int t;//no. of testcases
    cin>>t;

    while(t--){

        int p,l;//p=no. of pratas , l=no. of cooks
        cin>>p>>l;
        vector<int>cooks;
        for(int i=0; i<l; i++){
            int cook;
            cin>>cook;
            cooks.push_back(cook);
        }
        sort(cooks.begin(), cooks.end());

        int s=0;
        int e=0;
        for(int i=1; i<=p; i++){
            e+=cooks[l-1]*i;
        }
        int ans=-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(possibleSoln(cooks, p, l, mid)){
                ans=mid;
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }

        cout<<ans<<endl;
    }

return 0;
}