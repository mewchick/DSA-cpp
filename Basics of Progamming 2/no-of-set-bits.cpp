#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter an integer"<<endl;
    cin>>n;
    int count=0;
    while(n>0){
        if(n%2==1){
           count++; 
        }
        n=n/2;    
    }
    cout<<count;
return 0;
}