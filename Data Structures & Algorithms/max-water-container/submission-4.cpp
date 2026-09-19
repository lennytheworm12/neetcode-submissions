
class Solution {
   public:
    int maxArea(vector<int>& heights) {
        int l = 0;
        int r = heights.size() - 1;
        int ans = min(heights[l], heights[r]);

        while (l < r) {
            int area = min(heights[l], heights[r]) * (r-l);

            ans = max(ans, area);
            // try to move the smaller one

            if (heights[l] < heights[r]) {
                l++;
            } else if (heights[r] < heights[l]) {
                r--;
            }
            else {
                l++;
            }
        }
        return ans;
    }
};

