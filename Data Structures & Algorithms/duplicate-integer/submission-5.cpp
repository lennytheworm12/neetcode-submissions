
class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {

        unordered_set<int> seen;

        for (auto & n : nums) {
            if (seen.find(n) != seen.end()) {
                return true;
            }else {
            seen.insert(n);
            }
        }

        
        return false;
    }
};

