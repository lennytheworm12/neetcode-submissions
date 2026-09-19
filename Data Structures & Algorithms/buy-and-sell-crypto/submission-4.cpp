
class Solution {
   public:
    int maxProfit(vector<int>& prices) {
        int l = 0;
        int r = 1;
        int ans = 0;

        while (r < prices.size()) {
            int curr = (prices[r] - prices[l]);

            ans = max(ans, curr);
            if (prices[r] < prices[l]) {
                l = r;
            }

            r++;
        }
        return ans;
    }
};

