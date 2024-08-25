#include <algorithm> // Include this for the max function
#include <climits>
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n =nums.size();
        int ans=0;
        map <int, int> mpp;
        for(int i=0 ;i<n ; i++){
            mpp[nums[i]]++;
        }
        for(auto it :mpp){
            if(it.second>(n/2)){
                ans= it.first;
            }
        }
        return ans;
    }

};