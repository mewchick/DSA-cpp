#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;

void SortWRTdifference(vector<int>&arr, int n, int k, int x) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (abs(arr[j]-x) > abs(arr[j + 1]-x)) {
                swap(arr[j], arr[j+1]);
            }
        }
        // cout<<"i="<<i<<" ";
        // for(int i=0; i<n; i++){
        //     cout<<arr[i]<<" ";
        // }
        // cout<<endl;
    }
    
}

int main(){
    vector<int>arr={1,2,3,4,5};
    int k=4;
    int x=-1;
    int n=arr.size();
  
    SortWRTdifference(arr, n, k, x);
    cout<<"array after being sorted wrt difference: "<<endl;
    for(int i=0; i<n; i++){
            cout<<arr[i]<<" ";
    } 
    cout<<endl;

    cout<<"respective differences:"<<endl;
    for(int i=0; i<n; i++){
            cout<<abs(arr[i]-x)<<" ";
    }
    cout<<endl;

    cout<<"extract required array"<<endl;
    vector<int>ans;
    for(int i=0; i<k; i++){
        ans.push_back(arr[i]);
    }
    for(int i=0; i<k; i++){
            cout<<ans[i]<<" ";
    }
    cout<<endl;

    cout<<"sort extracted array:"<<endl;
    sort(ans.begin(), ans.end()); 
    for(int i=0; i<k; i++){
            cout<<ans[i]<<" ";
    }

    // cout<<endl;
    // sort(arr.begin(), arr.end());
    // for(int i=0; i<n; i++){
    //         cout<<arr[i]<<" ";
    // }
    // cout<<endl;
    // cout<<"final ans:= ";
    // for(int i=0; i<k; i++){
    //         cout<<arr[i]<<" ";
    // }
    // cout<<endl;

    //point number 2
        // for(int i=0; i<arr.size()-1; i++){
        //     if(abs(arr[i]-x)==abs(arr[i+1]-x)){
        //         if(arr[i]>arr[i+1]){
        //             swap(arr[i+1], arr[i]);
        //         }   
        //     }
        // }
        // for(int i=0; i<k; i++){
        //     cout<<arr[i]<<" ";
        // }
        // cout<<endl;

        //vector containing ans
        // vector<int> ans;
        // for(int i=0; i<k; i++){
           
        // }
        // cout<<"finalest ans"<<endl;
        // for(int i=0; i<k; i++){
        //     cout<<arr[i]<<" ";
        // }

    

return 0;
}
