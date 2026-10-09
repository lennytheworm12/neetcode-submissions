
class Solution {
   public:
    int evalRPN(vector<string>& tokens) {
        // given a stream of numbers and oeprations the sequence is guaranteed to be valid
        // arithmetic make a stack add until we read in operations add in a number
        stack<int> nums;
        for (auto& c : tokens) {
            if (c == "+" || c == "-" || c == "*" || c == "/") {
                // if its an operator take the top 2 numbers and preform the operationA
                int val1 = nums.top();
                nums.pop();
                int val2 = nums.top();
                nums.pop();

                if (c == "+") {
                    nums.push(val1 + val2);
                }
                if (c == "-") {
                    nums.push(val2 - val1);
                }
                if (c == "*") {
                    nums.push(val1 * val2);
                }
                if (c == "/") {
                    nums.push(val2 / val1);
                }
            } else {
                nums.push(stoi(c));
            }
        }
        return nums.top();
    }
};