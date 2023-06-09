#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int row1=1;
    int count1=1;
    int sum_row=0;
    
    while(row1<=n){
        for(int j=1; j<=row1; j++){
            if(j==row1){
                cout<<count1;
            }
            else{
                cout<<count1<<"*";
            }
            count1++; 
        }
        cout<<endl;
        if(row1!=n){
            sum_row=sum_row+row1;
        }
        row1++;
    }
    //cout<<"sum_row="<<sum_row<<endl;
    int row2=1;
    int count2=sum_row+1;
    int difference=n-1;
    int count3;

    while(row2<=n){
        count3=count2;
             
        for(int j=1; j<=n-row2+1; j++){
           if(j==n-row2+1){
                cout<<count3;
            }
            else{
                cout<<count3<<"*";
            }
            count3++;      
        }
        cout<<endl;
        row2++;
        count2=count2-difference;
        //cout<<"difference="<<difference<<endl;
        difference--;
    }
return 0;
}