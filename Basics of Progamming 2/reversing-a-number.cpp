#include<iostream>
using namespace std;

int reverse(int n){
    if(n>=0){
        int ans=0;
        while(n>0){
            int rem=n%10;
            ans=ans*10+rem;
            n=n/10;
        }
        return ans;
    }

    else{
    n=-n;
     int ans=0;
        while(n>0){
            int rem=n%10;
            ans=ans*10+rem;
            n=n/10;
        }  
    return -ans;

    }
}

int main(){
    int n;
    cin>>n;
    cout<<"answer="<<reverse(n)<<endl;
return 0;
}