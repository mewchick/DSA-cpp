#include<iostream>
#include<vector>
using namespace std;

void wavePrintMatrix(vector<vector<int>>v){
    int column=0;
    int row;
    
    while(column<v[0].size()){
        if(column%2==0){
            row=0;
            while(row<v.size()){
                cout<<v[row][column]<<" ";
                row++;
            }
        }
        else{
            row=v.size()-1;
            while(row>=0){
                cout<<v[row][column]<<" ";
                row--;
            }
        }
        column++;
        
    }
}
int main(){
    vector<vector<int>>v{
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };
    wavePrintMatrix(v);
return 0;
}