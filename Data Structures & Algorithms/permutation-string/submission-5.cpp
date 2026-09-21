
class Solution {
public:
    bool checkInclusion(string s1, string s2) {
                if (s1.size() > s2.size()) {
            return false;
        }
        vector<int> s1_freq(26);
        vector<int> window_freq(26);
        int r = 0;
        int l = 0;
        for (auto& c: s1) {
            s1_freq[c - 'a']++;
        }
        while (r < s1.length()) {
            window_freq[s2[r] -'a']++;
            r++;
        }
        while (r < s2.length()) {
            if (window_freq == s1_freq) {
                return true;
            }
            window_freq[s2[r] -'a']++;
            r++;
            window_freq[s2[l] -'a']--;
            l++;
        }
        return window_freq == s1_freq;
    }
};

