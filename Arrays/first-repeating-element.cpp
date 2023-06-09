#include<iostream>
#include<limits.h>
using namespace std;

int firstRepeated(int arr[], int n) {      
        int brr[50];
        //copy of arr=brr
        for(int a=0; a<n; a++){
            brr[a]=arr[a];
        }
        
        //sorts in ascending order
        int i=0;
        while(i<n){
            if(brr[i]!=brr[brr[i]-1]){
                swap(brr[i], brr[brr[i]-1]);
            }
            else i++;
        }
        for(int a=0; a<n; a++){
            cout<<brr[a]<<" ";
        }
        int ans=INT_MAX;
        int b;
        for(int j=0; j<n-1; j++){
            if(brr[j]==brr[j+1]){
                for(b=0; b<n; b++){
                    if((arr[b]==brr[j]) && (b<ans) ){
                        ans=b;
                    }
                    
                }
            }
        }
        return b+1;
        
    }

int main(){
    int n, arr[50];
    cout<<"enter size of array (arr)"<<endl;
    cin>>n;
    cout<<"enter array (arr)"<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int ans=firstRepeated(arr, n);
    cout<<endl<<ans;
return 0;
}