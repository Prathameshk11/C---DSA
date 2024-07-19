class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n= nums.size();
        int ans=0;
        int count=0;
        int candi=0;

        for(int i=0 ; i<n ; i++){
            if(count==0){
                count=1;
                candi= nums[i];
            }
            else if(candi==nums[i]){
                count++;
            }
            else count--;
        }
        return candi;
    }

};