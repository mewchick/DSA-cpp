#include<iostream>
using namespace std;

int main(){
    int r,c;

    cout<<"enter no. of rows"<<endl;
    scanf("%d", &r);
    cout<<"enter no. of column"<<endl;
    scanf("%d", &c);

    int row=1,column=1;

    while(row<=r){
        while(column<=c){
            if(row>1 && row<r && column>1 && column<c){
                cout<<" ";
                column++;
            }
            else 
            {cout<<"*";
            column++;
            }
        }
        column=1;
        cout<<endl;
        row++;


    }
return 0;
}