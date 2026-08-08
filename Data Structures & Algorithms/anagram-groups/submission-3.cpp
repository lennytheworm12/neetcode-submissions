
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        //given a an array of strings group all anagrams into a sublist
        //go through the array and make a dict where key is char mapping/ ordered key 
        std::unordered_map<string, vector<string>> amap;
        std::vector<vector<string>> ans;

        for (auto& s: strs) {
            vector<int> temp(26);
            for (auto & c: s) {
                int idx = c -'a';
                temp[idx]++;
            }
            //turn the arr into a string to tupletize
            string key = to_string(temp[0]);
            //for the rest of the letters
            for (int i = 1; i < 26; i++) {
                key += ',' + to_string(temp[i]);
            }
            //delimiter to make 11 a's and 0 b's different from 1 a 1 b
            amap[key].push_back(s);

        }
        //for each key/anagram add the results to ans
        for (const auto& [k,v]: amap) {
            ans.push_back(v);
        }
        return ans;
    }
};

