#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[50];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int l=0, h=n-1;
    while(l<h){
        if(arr[h]>=0){
            h--;
        }
        else if(arr[h]<0){
            swap(arr[h], arr[l]);
            l++;
        }
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
return 0;
}