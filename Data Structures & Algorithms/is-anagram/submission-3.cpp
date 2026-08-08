class Solution {
public:
    bool isAnagram(string s, string t) {
        //if the count of each letter and the size of the strings are the same its an anagram
        if (s.length() != t.length()) {
            return false;
        }
        std::vector<int> s_vec(26, 0);
        std::vector<int> t_vec(26, 0);

        for (int i{}; i < s.length(); i++) {
            s_vec[s[i]- 'a']++;
            t_vec[t[i]- 'a']++;
        }
        return s_vec == t_vec;

        
    }
};