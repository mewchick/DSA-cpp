#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	long long int n,m;
	cin>>n>>m;
	vector<long long int>trees;
	for(long long int i=1; i<=n; i++){
		long long int height;
		cin>>height;
		trees.push_back(height);
	}
	
    sort(trees.begin(), trees.end());
    long long int s=0;
    long long int e=trees[trees.size()-1];
    long long int ans=-1;
    while(s<=e){//varying height of the cutter
        long long int mid=s+(e-s)/2;
        long long int sumWood=0;
        for(long long int i=0; i<trees.size(); i++){
            if(trees[i]-mid>=0){
                sumWood+=trees[i]-mid;
            }
        } 
        if(sumWood>=m){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    cout<<"ans="<<ans;

	return 0;
}