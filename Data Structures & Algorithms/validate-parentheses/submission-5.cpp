class Solution {
public:
    bool isValid(string s) {
        //check if a string of parenthesis has all matching brackets open to close add opening paren to stack if closing of the same type then 
        stack<char> paren;
        unordered_map<char, char> paren_key = { {'(', ')'}, { '{', '}'}, { '[', ']'}};
        
        for (auto & c: s) {
            if (paren_key.find(c) != paren_key.end()) {
                paren.push(c);
            }
            else {//its a closing bracket
                if (!paren.empty() && paren_key[paren.top()] == c) {
                    paren.pop();
                }
                else {
                    return false;
                }
            }
        }
        return paren.empty();
    }
};

