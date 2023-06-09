#include<iostream>
using namespace std;

int main(){
    int r;
    cout<<"enter no. of rows"<<endl;
    cin>>r;
    int rows=1,column=1;
    while(rows<=r){
        while(column<=2*r-1){
            if(column>=r-rows+1 && column<=r+rows-1){
                cout<<"*";
            }
            else cout<<" ";
            column++; 
        }        
        column=1;
        rows++;
        cout<<endl;
    }
    
return 0;
}