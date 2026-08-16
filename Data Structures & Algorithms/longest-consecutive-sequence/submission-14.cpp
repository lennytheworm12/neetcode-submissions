
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int ans = 0;
        unordered_set<int> seen;

        for (auto & n: nums) {
            seen.insert(n);
        }
        for (auto & n: seen) {
            int temp = n;
            if (!seen.contains(n-1)) {
                int curr_run = 0;
                while (seen.contains(temp)) {//check the whole sequence
                    //cout << "temp is currently:" << temp << '\n';
                    curr_run ++;
                    ans = max(ans, curr_run);
                    temp+=1; //check the next number
                }
            }
        }
        return ans;
    }
};


