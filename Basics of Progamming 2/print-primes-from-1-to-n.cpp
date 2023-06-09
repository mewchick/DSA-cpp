#include<iostream>
using namespace std;
void printPrimes(int n){
        cin>>n;
        for(int i=1; i<=n; i++){
            int count=0;
            for(int j=1; j<=i-1; j++){
                if(i%j==0){
                    count++;
                }
                if(count>1){
                    break;
                }        
            }
            if(count==1){
                cout<<i<<endl;
            }
        }
    }
int main(){
    int n; 
    printPrimes(n);
return 0;
}