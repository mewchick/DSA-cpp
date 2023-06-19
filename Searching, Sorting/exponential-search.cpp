#include<iostream>
#include<vector>
using namespace std;

int min(int a, int b){
    if(a<b){
        return a;
    }
    else{
        return b;
    }
}

int bSearch(vector<int>arr, int start, int end, int x){
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==x){
            return mid;
        }
        else if(arr[mid]>x){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return -1;
}
int find(vector<int>arr, int x){
    if(arr[0]==x){
        return 0;
    }
    else{
        int i;
        for(i=1;i<arr.size();){
            if(arr[i]==x){
                return i;
            }
            else if(arr[i]<x){
                i=2*i;            
            }
            else break;
        }
        return bSearch(arr, ((i/2)+1), min((arr.size()-1), i-1), x);
    }
}
int main(){
    vector<int>arr={3,4,5,6,11,13,14,15,56,70};
    int x=11;//to be found
    int index=find(arr,x);
    cout<<"required index="<<index;
return 0;
}