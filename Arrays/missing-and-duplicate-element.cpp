#include<iostream>
using namespace std;

int main(){
    //if N is size of array then elements are [1,N]
    //ex N=5, arr[]={1,3,5,3,4}
    cout<<"enter size of array"<<endl;
    int n;
    cin>>n;
    cout<<"enter array"<<endl;
    int arr[50];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int j=0;
    while(j<n){
        if(arr[j]!=arr[arr[j]-1]){
            swap(arr[j], arr[arr[j]-1]);
        }
        else j++;
    }

    int missing, duplicate;
    for(int j=0; j<n-1; j++){
        if(arr[j]==arr[j+1]){
            missing=j+1;
            duplicate=arr[j];
        }
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl<<"missing="<<missing<<" "<<"duplicate="<<duplicate;
return 0;
}