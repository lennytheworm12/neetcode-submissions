
class Solution {
   public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;

        int l = 0;
        for (int i{}; i < nums.size() - 2; i++) {
            // if we are at a duplicate index and not the first
            if (i != 0 && nums[i] == nums[i - 1]) {
                continue;
            }
            l = i + 1;
            int r = nums.size() - 1;
            while (l < r) {
                // find all the pairings that make triplets for this i
                int curr = nums[i] + nums[l] + nums[r];
                if (curr == 0) {
                    ans.push_back({nums[i], nums[l], nums[r]});
                    l++;
                    r--;
                    while (l < r && nums[l] == nums[l - 1]) {
                        l++;
                    }
                    while (l < r && nums[r] == nums[r + 1]) {
                        r--;
                    }
                }

                else if (curr > 0) {
                    r--;
                } else if (curr < 0) {
                    l++;
                }

                // l and r should also skip duplicate value idx themselves?
            }
        }
        return ans;
    }
};

