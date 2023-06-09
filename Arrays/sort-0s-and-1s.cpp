#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n,count=0;;
    cin>>n;
    vector<int> ans;
    cout<<"enter only 0s and 1s"<<endl;
    int arr[50];
    cout<<"enter array"<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        if(arr[i]==0){
            ans.push_back(arr[i]);
            count++;
        }
    }
    for(int i=1; i<=n-count; i++){
        ans.push_back(1);
    }
    cout<<endl<<"final array:-"<<endl;
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
return 0;
}