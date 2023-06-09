#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter an integer"<<endl;
    cin>>n;

    while(n>0){
        cout<<n%10<<endl;
        n=n/10;
    }
return 0;
}