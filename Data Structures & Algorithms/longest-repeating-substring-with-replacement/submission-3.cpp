
class Solution {
   public:
    int characterReplacement(string s, int k) {
        int ans = 0;
        // given a string and k replacements what is the longest substring of one character we can
        // have
        int l = 0;
        int r = 0;
        int max_freq = 0;
        vector<int> char_map(26, 0);

        while (r < s.length()) {
            // extend our window forward and if the count of a character is larger than the max
            // frequency update it
            char_map[s[r] - 'A']++;
            if (char_map[s[r] - 'A'] > max_freq) {
                max_freq++;
                //cout << "max freq is now " << max_freq << "at idx : " << r << '\n';
            }
            // refix our window the max window we can have would be window length = max_freq + k so
            // when window length is larger we remove from the left
            while ((r - l + 1) > k + max_freq) {
                char_map[s[l] - 'A']--;
                l++;
            }
            ans = max(ans, r-l+1);
            
            r++;
        }
        return ans;
    }
};

