#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int rowA=1;

    while(rowA<=n){
        for(int j=1; j<=2*rowA-1; j++){
            if(j%2==0){
                cout<<"*";
            }
            else cout<<rowA;
        }
        cout<<endl;
        rowA++;
    }

    int rowB=1;
    
    while(rowB<=n){
        for(int j=1; j<=2*n-2*rowB+1; j++){
            if(j%2==0){
                cout<<"*";
            }
            else cout<<n-rowB+1;          
        }
        cout<<endl;
        rowB++;
    }

        
        
        


    
return 0;
}