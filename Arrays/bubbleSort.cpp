#include<iostream>
#include<vector>
#include <limits.h>
using namespace std;

void ascBubSort(vector<int>arr){//ascending order bubble sort
    for(int i=1; i<=arr.size()-1; i++){
        bool swapped=false;
        for(int j=0; j<arr.size()-i; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped=true;
            } 
        }
        if(swapped==false){
            break;
        }     
    }
    cout<<"sorted array in ascending order:-"<<endl;
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }  
}

int main(){
 vector<int>arr={10,1,7,6,14,9};
 ascBubSort(arr); 
return 0;
}