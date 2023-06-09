#include<iostream>
using namespace std;

int main(){
    
    int rows=3, column=3;
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};

    for(int i=0; i<rows; i++){
        for(int j=i; j<column; j++){
            swap(arr[i][j], arr[j][i]);
        }
    }
    for(int i=0; i<rows; i++){
        for(int j=0; j<column; j++){
            cout<<arr[i][j]<<" ";
        }
    }
return 0;
}