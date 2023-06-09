#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter no. of rows"<<endl;
    cin>>n;

    int rowA=1;
    while(rowA<=n){
        for(int j=1; j<=n-rowA; j++){
            cout<<" ";
        }     
            cout<<"*";
        for(int j=1; j<=(rowA-2)*2+1; j++){
            cout<<" ";
        }
        if(rowA!=1){
            cout<<"*";
        }
        rowA++;
        cout<<endl;
    }

    int rowB=1;
    while(rowB<=n){
        for(int j=1; j<=rowB-1; j++){
            cout<<" ";
        }     
            cout<<"*";
        for(int j=1; j<=(n-rowB-1)*2+1; j++){
            cout<<" ";
        }
        
        if(rowB!=n){
                cout<<"*";
        }
        
        rowB++;
        cout<<endl;
    }
return 0;
}