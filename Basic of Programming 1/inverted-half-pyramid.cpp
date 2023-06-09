#include<iostream>
using namespace std;

int main(){
    int r;
    cout<<"enter no. of rows"<<endl;
    cin>>r;
    int row=1,column=1;
    while(row<=r){
        while(column<=r-row+1){
            cout<<"*";
            column++;
        }
    column=1;
    row++;
    cout<<endl;

    }








}


