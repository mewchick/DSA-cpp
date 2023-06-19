#include<iostream>
using namespace std;

int findPages(int A[], int N, int M){
    int ans;
    int searchSpace=0;
    for(int i=0; i<N; i++){
        searchSpace+=A[i];
    }
    int s=0; 
    int e=searchSpace;
    while(s<e){
        int mid=s+(e-s)/2;
        int students=0;
        int sum=0;
        for(int i=0; i<N; i++){
            sum+=A[i];
            if(sum>mid){
                students++;
                sum=0;
            }
            if(students>N){
                ans=mid;
                e=mid-1;
                break;
            }   
        }
        if(students<N){
            s=mid+1;
        }
    }
    return ans;
}

int main(){
    int N=4;//no. of books
    int A[4]={12,34,67,90};
    int M=2;// no. of students
    cout<<"required pages="<<findPages(A,N,M);
return 0;
}