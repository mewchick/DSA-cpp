#include<iostream>
using namespace std;

int main(){
    int r,c;

    cout<<"enter no. of rows"<<endl;
    scanf("%d", &r);
    cout<<"enter no. of column"<<endl;
    scanf("%d", &c);

    int row=1,column=1;
    while (row<=r)
    {
       while(column<=c){
        cout<<"*";
        column++;
       }
       cout<<endl;
       column=1;
       row++;

    }
    


return 0;
}