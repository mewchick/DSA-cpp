#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter no. of rows"<<endl;
    cin>>n;
    int row=1,column=1;
    while(row<=n){
        while(column<=n){
            if(row==1 || row==n){
                cout<<"*";
            }
            else{
                if(column==1 || column==n){
                    cout<<"*";
                }
                else cout<<" ";
            }
            column++;
        }
        column=1;
        row++;
        cout<<endl;
    }
return 0;
}