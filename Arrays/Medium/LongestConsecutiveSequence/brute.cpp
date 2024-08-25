class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int max_len=1;
        int len=1;
        int n = nums.size();
        for(int i = 0 ; i<n-1 ; i++){
            if(nums[i]==nums[i+1]){
                continue;
            }
            if(nums[i]+1==nums[i+1]){
                len++;
                
            }
            else {
                len=1;
            }
            max_len= max(max_len,len);
        }
        return n==0 ? 0 : max_len;
    }
};