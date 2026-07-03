class Solution {
public:
    string sol(string& s, int& i) {
        string ans = "";
        while (i < s.size() && s[i] != ']') {
            if (isalpha(s[i])) {
                ans += s[i];
                i++;
            } else if (isdigit(s[i])) {
                int num = 0;
                while (i < s.size() && isdigit(s[i])) {
                    num = num * 10 + (s[i] - '0');
                    i++;
                }
                i++;
                string temp = sol(s, i);
                i++;
                while (num > 0) {
                    ans = ans + temp;
                    num--;
                }
            }
        }
        return ans;
    }
    string decodeString(string s) {
        int i = 0;
        return sol(s, i);
    }
};