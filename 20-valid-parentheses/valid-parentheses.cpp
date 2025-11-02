class Solution {
public:
    bool isValid(string s) {
        stack<int> mstack;

        for (char c : s) {
            if (c == '(' || c == '{' || c == '[') {
                mstack.push(c);
            } else {
                if (mstack.empty())
                    return false;
                char top = mstack.top();
                mstack.pop();

                if ((c == ')' && top != '(') || (c == '}' && top != '{') ||
                    (c == ']' && top != '[')) {
                    return false;
                }
            }
        }
        return mstack.empty();
    }
};