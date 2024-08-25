class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector <int> pos;
        vector <int> neg;
        vector <int > ans;
        int n = nums.size();
        for(int i =0; i<n ; i++){
            if(nums[i]>=0){
               pos.push_back(nums[i]);
            }
            else{
                neg.push_back(nums[i]);
            }
        }
        int i =0;
        while(i<pos.size()){
            ans.push_back(pos[i]);
            ans.push_back(neg[i]);
            i++;
        }
        return ans;
    }
};