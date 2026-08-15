class Solution {
public:

    string encode(vector<string>& strs) {
        //encode the string by storing how many characters it holds and a delimiter
        string ans = "";
        for (auto & s: strs) {
            string temp = to_string(s.length());
            ans += temp + "#" + s;

        }
        return ans;


    }

    vector<string> decode(string s) {
        vector<string> ans;
        int i = 0;
        
        while (i < s.length()) {
            //read i forward until delim
            int to_read = 0;
            while (i < s.length() && s[i] != '#') {
                to_read = (to_read * 10) + (s[i] - '0');
                i++;
            }
            i++;
            ans.push_back(s.substr(i, to_read));
            //move i substr length forward to the next string char count
            i += to_read ;
            

        }
        return ans;

    }
};

