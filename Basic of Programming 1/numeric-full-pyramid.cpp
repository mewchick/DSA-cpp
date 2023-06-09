#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int row=1,column=1;

    while(row<=n){
        for(int j=1; j<=n-row; j++){
            cout<<" ";
        }
        int num=row;
        for(int j=1; j<=row; j++){          
            cout<<num;
            num++;
        }
        int num2=2*row-2;
        for(int j=1; j<=row-1; j++){          
            cout<<num2;
            num2--;
        }
        row++;
        cout<<endl;
    }
return 0;
}