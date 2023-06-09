#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int main(){
    int n,m,arr1[50],arr2[50];

    vector<int> ans;

    cin>>n>>m;

    cout<<"enter array 1"<<endl;
    for(int i=0; i<n; i++){
        cin>>arr1[i];
    }
    cout<<"enter array 2"<<endl;
    for(int i=0; i<m; i++){
        cin>>arr2[i];
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if((arr1[i]^arr2[j])==0){//if elements are equal
                arr2[j]=INT_MIN;
                break;
            }
        }
    }
    
    for(int i=0; i<n; i++){
        ans.push_back(arr1[i]);
    }
    for(int i=0; i<m; i++){
        if(arr2[i]!=INT_MIN){
            ans.push_back(arr2[i]);
        }
        
    }

    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
return 0;
}