
class Solution {
public:
#include<vector>
#include<algorithm>

    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int l=0;
        int h=arr.size()-1;

        while(h-l+1!=k){//shrinking the array till we have k number of elements
            if( abs(arr[l]-x)>abs(arr[h]-x) ){
                l++;
            }
            else{
                h--;
            }
        }

        vector<int>ans;
        for(int i=l; i<=h; i++){
            ans.push_back(arr[i]);
        }

        sort(ans.begin(), ans.end());
        
        return ans;
    }
    
};