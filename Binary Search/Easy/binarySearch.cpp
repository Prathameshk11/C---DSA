class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low= 0;
        int n = nums.size();
        int high = n-1;
        int min=-1;
        while(low<high){
             mid = low + (high-low)/2;

            if(mid==target){
                return mid;
            }

            if(target>mid){
                high =mid+1;
            }
        }
        return mid;
    }
};