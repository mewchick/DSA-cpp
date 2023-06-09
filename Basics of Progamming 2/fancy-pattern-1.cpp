#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int row=1, column=1;

    while(row<=n){
        for(int j=1; j<=n+4-row; j++){
            cout<<"*";
        }

        for(int j=1; j<=2*row-1; j++){
            if(j%2!=0){
                cout<<row;
            }
            else cout<<"*";
        }

        for(int j=1; j<=n+4-row; j++){
            cout<<"*";
        }
        row++;
        cout<<endl;
    }
return 0;
}