#include<iostream>
#include<vector>
#include <limits.h>
using namespace std;

void ascSort(vector<int>arr){
    for(int i=0;i<arr.size(); i++){
        int min=INT_MAX;
        int minIndex=-1;
        for(int j=i; j<arr.size(); j++){          
            if(arr[j]<min){
                min=arr[j];
                minIndex=j;
            }
        }
        swap(arr[i],arr[minIndex]);
    }
    cout<<"sorted array in ascending order:-"<<endl;
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }  
}

int main(){
 vector<int>arr={5,4,3,-100,2,1};
 ascSort(arr); 

return 0;
}