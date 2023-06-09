#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cout<<"enter no. of rows"<<endl;
    cin>>n;

    int row=1, column=1, num=1;
    while(row<=n){
        while(column<=row){
            cout<<num<<" ";
            num++;
            column++;
        }
        column=1;
        row++;
        cout<<endl;
    }

return 0;
}