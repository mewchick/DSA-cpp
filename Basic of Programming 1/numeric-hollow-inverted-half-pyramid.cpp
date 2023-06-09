#include<iostream>
using namespace std;

int main(){
    int r;
    cout<<"enter no. of rows"<<endl;
    cin>>r;

    int row=1,column=1;
    
    while(row<=r){
        while(column<=r){
            if(row==1){
                cout<<column;
            }
            else{
                if(column==1){
                    cout<<row;
                }
                if(column==r-row){
                    cout<<r;
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