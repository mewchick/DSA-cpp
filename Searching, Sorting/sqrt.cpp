#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the number whose square root you wanna calculate"<<endl;
    cin>>n;

    int precision;
    cout<<"enter number of decimal precision"<<endl;
    cin>>precision;

    int s=0;
    int e=n;
    int mid;
    double ans;

    while(s<=e){
        mid=s+(e-s)/2;
        if(mid*mid==n){
            ans=mid;
            break;
        }
        else if(mid*mid>n){
            e=mid-1;
            
        }       
        else{
            s=mid+1;
            ans=mid;
        }
            
    }

    cout<<"answer1="<<ans<<endl;

    float step=1;
    for(int i=1; i<=precision; i++){
        step=step/10;
        cout<<i<<") step="<<step<<endl;
        for(double j=ans; j*j<=n; j=j+step){
            ans=j;
        }
        cout<<i<<") final answer="<<ans<<endl;
    }
    
    
return 0;
}