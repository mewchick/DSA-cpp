#include<iostream>
using namespace std;

int main(){
    int r;
    cout<<"enter no. of rows"<<endl;
    cin>>r;

    int row=1, column=1;

    while(row<=r){
        while(column<=2*r-1){
            if(column<=r-row || column>=r+row){
                cout<<" ";
            }
        }
    }
return 0;
}