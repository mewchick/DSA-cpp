#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int row1=1, column=1;

    while(row1<=n){
        for(int j=1; j<=row1; j++){
            cout<<"*";
        }
        for(int j=1; j<=(n-row1)*2; j++){
            cout<<" ";
        }
        for(int j=1; j<=row1; j++){
            cout<<"*";
        }
        row1++;
        cout<<endl;
    }

    int row2=1;
    while(row2<=n){
        for(int j=1; j<=n-row2+1; j++){
            cout<<"*";
        }
        for(int j=1; j<=(row2-1)*2; j++){
            cout<<" ";
        }
        for(int j=1; j<=n-row2+1; j++){
            cout<<"*";
        }
        row2++;
        cout<<endl;
    }
return 0;
}