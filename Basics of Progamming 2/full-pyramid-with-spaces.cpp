#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter no. of rows"<<endl;
    cin>>n;

    int row=1;
    while(row<=n){
        for(int j=1; j<=n-row; j++){
            cout<<" ";
        }
        for(int j=1; j<=row; j++){
            cout<<"* ";
        }
        row++;
        cout<<endl;
    }

return 0;
}