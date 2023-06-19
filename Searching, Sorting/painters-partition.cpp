#include<iostream>
#include<algorithm>
#include <bits/stdc++.h>
using namespace std;

bool possibleSoln(int arr[], int n, int k, int soln){
    
    int workers=1;
    int sum=0;
    for(int i=0; i<n; i++){
        if(arr[i]>soln){
            return false;
        }
        if(sum+arr[i]>soln){
            workers++;
            sum=arr[i];
            if(workers>k){
                return false;
            }
        }
        else{
            sum+=arr[i];
        }
    }
    return true;
}

int minTime(int arr[], int n, int k){
    int ans=-1;
    if(n==1){
        return arr[0];
    }
    int s=0;
    cout<<endl;
    int e=0;
    for(int i=0; i<n; i++){
        e+=arr[i];
    }
    while(s<=e){
        int mid=s+(e-s)/2;
        if(possibleSoln(arr, n, k, mid)){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return ans;
}

int main(){
int arr[1]={5};
int n=1;//no. of boards
int k=2;//no. of workers   
cout<<"minimum time="<<minTime(arr, n, k); 
return 0;
}