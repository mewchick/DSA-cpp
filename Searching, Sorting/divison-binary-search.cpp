#include<iostream>
using namespace std;

int divide(int dividend, int divisor){
    int s=0;
    int e=abs(dividend);
    int mid;
    int ans;

    while(s<=e){
        mid=s+(e-s)/2;
        if(abs(mid*divisor)==abs(dividend)){
            ans=mid;
            break;
        }
        if(abs(mid*divisor)>abs(dividend)){
            e=mid-1;
        }
        else{
            ans=mid;
            s=mid+1;
        }
    }
    return ans; 
}

float Precision(int precision, int ansNoPrecision, int dividend, int divisor){
    double ans;
    double step=1;
    for(int i=1; i<=precision; i++){
        step=step/10;
        for(double j=ansNoPrecision; abs(dividend)>=abs(divisor)*j; j=j+step){
            ans=j;
            //cout<<"i="<<i<<" answer="<<ans<<endl;
        }  
    }
    return ans;
}

int main(){
    int dividend;
    int divisor;
    cout<<"enter dividend"<<endl;
    cin>>dividend;

    cout<<"enter divisor"<<endl;
    cin>>divisor;

    int precision;
    cout<<"enter division precision"<<endl;
    cin>>precision;
   
    int ansNoPrecision=divide(dividend, divisor);
 
    float ansWithPrecision=Precision(precision, ansNoPrecision, dividend, divisor);

    float finalAns;
    if((dividend>=0 && divisor>=0) || (dividend<0 && divisor<0)){
        finalAns=ansWithPrecision;
    }
    finalAns=-ansWithPrecision;

    cout<<dividend<<"/"<<divisor<<"="<<finalAns;
return 0;
}