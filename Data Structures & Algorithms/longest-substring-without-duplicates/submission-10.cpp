
class Solution {
   public:
    int lengthOfLongestSubstring(string s) {
        // given a string s find the length of the longest substring without duplicates
        // our window needs to keep a map of the characters in the window
        unordered_set<char> window;
        int l = 0;
        int r = 0;
        int ans = 0;

        while (r < s.length()) {
            // if the character we are about to add breaks our invariant shorten our window
            while (window.find(s[r]) != window.end() && l < r) {
                window.erase(s[l]);
                l++;
                //i dont think we have to keep track of window length here since its strictly decreasing
            }
            //add r to the window
            window.insert(s[r]);
            ans = max(ans, abs(r-l)+1);
            //cout << l <<  " " << r << '\n';
            //count window size
            r++;
            
        }
        return ans;
    }
};
//s="pwwkew"
