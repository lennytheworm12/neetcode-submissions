
class Solution {
public:
    bool isPalindrome(string s) {
        int l= 0, r = s.length() -1;

        while (l <= r) {
            while (l < r && !isalnum(s[l]) ) {
                l++;

            }
            //cout << l << '\n';
            while (r > l && !isalnum(s[r])) {
                r--;
            }

            if (tolower(s[l]) !=tolower(s[r]) ) {
                //cout << l << " "  <<  r;
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
};

