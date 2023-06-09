#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter no. of rows"<<endl;
    cin>>n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){     //spaces
            cout<<" ";
        }
        for(int j=i; j<2*i; j++){      //1st triangle containing peak
            cout<<j;
        }
        for(int j=2*i-2; j>=i; j--){   //2nd triangle 
            cout<<j;
        }
       
        cout<<endl;
    }
return 0;
}