#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int row=1, column1=1;  
    // A-65, a-97
    char ch=65;
    char character;
    
    while(row<=n){
        for(int j=1; j<=row; j++){
            cout<<char(ch+j-1)<<" ";
        }
        for(int j=1; j<=row-1; j++){
            cout<<char(ch+row-j-1)<<" ";
        }
        row++;
        cout<<endl;
    }

return 0;
}