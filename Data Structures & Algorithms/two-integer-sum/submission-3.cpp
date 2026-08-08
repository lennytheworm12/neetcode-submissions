
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //one pass
        //for each number we want to check if target - n has shown up before
        std::unordered_map<int, int> diff;

        for (int i{}; i < nums.size(); i++)  {
            int temp = target - nums[i];
            if (diff.find(temp) != diff.end()) {
                return {diff[temp], i};

            }
            //if a pairing cannot be found
            else {
                diff.insert({nums[i], i});
            }
        }
        return {0, 0};
        
    }
};

