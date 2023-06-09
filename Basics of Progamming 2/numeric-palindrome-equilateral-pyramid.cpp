#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int row=1;

    while(row<=n){
        for(int j=1; j<=n-row; j++){
            cout<<"  ";
        }

        for(int j=1; j<=row; j++){
            cout<<j<<" ";
        }

        for(int j=1; j<=row-1; j++){
            cout<<row-j<<" ";
        }
        row++;
        cout<<endl;

    }
return 0;
}