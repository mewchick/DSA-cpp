#include<iostream>
using namespace std;

void inputArr(int arr[], int size){
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
}

void extreme(int arr[], int size){
    int start=0;
    int end=size-1;
    
    for(int i=1; start<=end ;i++){
        if(start==end){
            cout<<arr[start];
        }
        else cout<<arr[start]<<" "<<arr[end]<<" ";
        start++;
        end--;      
    }
}

int main(){
    int size;
    cout<<"enter size of array"<<endl;
    cin>>size;
    int arr[50];
    inputArr(arr, size);
    extreme(arr, size);
return 0;
}