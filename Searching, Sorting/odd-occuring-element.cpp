// all elements occur even number of time except one
// all repeating occurence of element appears in pairs & pairs are not adjacent
// there can not be more than 2 consecutive occurence of any element
// find the element which occurs odd no. of times

// test case example- 1 1 2 2 3 3 4 4 3 600 600 4 4 

#include<iostream>
#include<vector>
using namespace std;

int fun(vector<int>arr){
    int s=0;
    int e=arr.size()-1;
    int mid;
    int ans;

    while(s<=e){
        mid=s+(e-s)/2;

        if(s==e){
            return mid;
        }
        if(mid%2==0){
            if(arr[mid]==arr[mid+1]){
                s=mid+2;
            }
            else{
                e=mid;
                
            }
        }

        else{
            if(arr[mid]==arr[mid+1]){
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }       
    }
}

int main(){
    vector<int> arr={7, 7, 1, 1, 3, 2, 2, 3, 3, 4, 4, 2, 2, 3, 3, 600, 600, 4, 4};
    int index=fun(arr);
    cout<<"index="<<index<<endl;
    cout<<"value="<<arr[index]<<endl;
return 0;
}