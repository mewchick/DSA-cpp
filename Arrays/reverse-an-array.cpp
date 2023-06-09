#include<iostream>
using namespace std;
void inputArr(int arr[], int size){
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
}

void reverseArr(int arr[], int size){
    int start=0, end=size-1;
    while(start<end){
        int temp;
        temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}

void printArr(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int size;
    cout<<"enter size of array"<<endl;
    cin>>size;
    int arr[50];
    inputArr(arr, size);
    reverseArr(arr,size);
    printArr(arr, size);
return 0;
}