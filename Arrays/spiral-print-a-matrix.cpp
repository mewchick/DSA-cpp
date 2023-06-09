#include<iostream>
#include<vector>
using namespace std;
void spiralOrder(vector<vector<int>>& matrix) {
    vector<int>ans;
    int size=matrix[0].size() * matrix.size();
    int elements=0;
    
    int rows=matrix.size();
    int columns=matrix[0].size();

    int startRow=0;
    int endCol=columns-1;
    int endRow=rows;
    int startCol=0;

    while(elements<=size){
        for(int i=startCol; i<=endCol && elements<=size; i++){
            ans.push_back(matrix[startRow][i]);
            elements++;
        }
        startRow++;
        for(int i=startRow; i<=endRow && elements<=size; i++){
            ans.push_back(matrix[i][endCol]);
            elements++;
        }
        endCol--;
        for(int i=endCol; i>=startCol && elements<=size; i--){
            ans.push_back(matrix[endRow][i]);
            elements++;
        }
        endRow--;
        for(int i=endRow; i>=startRow && elements<=size; i--){
            ans.push_back(matrix[i][startCol]);
            elements++;
        }

    }

    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
}
int main(){
    vector<vector<int>>v={
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11,12,13,14,15},
        {16,17,18,19,20}
    };
    spiralOrder(v);
    

return 0;
}