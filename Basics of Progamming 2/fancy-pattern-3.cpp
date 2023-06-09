#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    //upper part
     
     int row1=1;
     while(row1<=n/2+1){
        int count=1;
        //1st triangle
        for(int j=1; j<=row1; j++){
            cout<<count;
            count++;
        }
        //2nd triangle
        count=count-2;
        for(int j=1; j<=row1-1; j++){
            cout<<count;
            count--;
        }
        row1++;
        cout<<endl;
     }

     //lower part
     int row2=1;
     while(row2<=n/2){
        int count2=1;
        //1st triangle
        for(int j=1; j<=row1; j++){
            cout<<count2;
            count2++;
        }
        //2nd triangle
        count=count-2;
        for(int j=1; j<=row1-1; j++){
            cout<<count;
            count--;
        }
        row1++;
        cout<<endl;
     }

    
return 0;
}