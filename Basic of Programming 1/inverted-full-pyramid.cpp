#include<iostream>
using namespace std;

int main(){
    int r;
    cout<<"enter no. of rows"<<endl;
    cin>>r;

    int row=1, column=1;

    while(row<=r){
        while(column<=2*r-1){
            if(column>=row && column<=2*r-row){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
            column++;
        }
        column=1;
        row++;
        cout<<endl;
    }
return 0;
}