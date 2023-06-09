#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int rowA=1;

    while(rowA<=n){
        for(int j=1; j<=n-rowA+1; j++){
            cout<<"*";
        }
        for(int j=1; j<=2*rowA-1; j++){
            cout<<" ";
        }
        for(int j=1; j<=n-rowA+1; j++){
            cout<<"*";
        }
        rowA++;
        cout<<endl;
    }

    int rowB=1;
    int num=2*n-1;
    
    while(rowB<=n){
        for(int j=1; j<=rowB; j++){
            cout<<"*";
        }       
        for(int j=num; j>=1; j=j-1){
            cout<<" ";
        }
        num=num-2;
        for(int j=1; j<=rowB; j++){
            cout<<"*";
        }
        rowB++;
        cout<<endl;
    }
return 0;
}