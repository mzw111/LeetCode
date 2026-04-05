class Solution {
public:
    int mirrorFrequency(string s) {
        unordered_map<char, int> x;
        for (auto& p : s) {
            x[p]++;
        }
        int ans = 0;
        unordered_set<char> visited;
        for (auto& i : x) {
            char c = i.first;
            char m;
            if (visited.count(c))
                continue;
            if (isalpha(c)) {
                m = 'z' - (c - 'a');
            } else {
                m = '9' - (c - '0');
            }

            if (x.count(m)) {
                ans = ans + abs(x[c] - x[m]);
            } else {
                ans = ans + abs(x[c] - 0);
            }

            visited.insert(c);
            visited.insert(m);
        }
        return ans;
    }
};