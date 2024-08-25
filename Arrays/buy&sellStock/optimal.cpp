
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini = prices[0];
        int prof=0;
        int cost=0;
        int n = prices.size();
        for(int i=0; i<n ; i++){
            cost=prices[i]-mini;
            prof= max(prof,cost);
            mini=min(mini , prices[i]);
        }
        return prof;
    }
};