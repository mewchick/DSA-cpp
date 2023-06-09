#include<iostream>
#include<vector>
using namespace std;

void InsertionSort(vector<int>arr){
    for(int round=1; round<=arr.size()-1; round++){
        int val=arr[round];
        int j;
        for(j=round-1; j>=0; j--){
            if(arr[j]>val){
                arr[j+1]=arr[j];
            }
            else break;
        }
        arr[j+1]=val;
    }

    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    vector<int>arr={10,1,7,6,14,9};
    InsertionSort(arr);
return 0;
}