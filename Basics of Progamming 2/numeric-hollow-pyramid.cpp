#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int row=1, column=1;

    while(row<=n){

        if(row!=n){
            for(int j=1; j<=n-row; j++){
                cout<<" ";
            }

            cout<<1;

            for(int j=1; j<=(row-1)*2-1; j++){
                cout<<" ";
            }

            if(row!=1){
                cout<<row;
            }
        }

        else{
            int count=1;
            for(int j=1; j<=2*n-1; j++){
                if(j%2==0){
                    cout<<" ";
                }
                else{
                    
                    cout<<count;
                    count++;
                }
            }
        }
        row++;
        cout<<endl;
    }
return 0;
}