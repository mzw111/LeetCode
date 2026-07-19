class Solution {
public:
    string smallestSubsequence(string s) {
        vector<int> frequency(256, 0);
        vector<int> stacky(256, 0);
        for (char c : s) {
            frequency[c]++;
        }
        string result;
        for (char c : s) {
            frequency[c]--;
            if (stacky[c])
                continue;
            //!st.empty()      -> true
            // 'a' < 'b'        -> true
            //freq['b'] > 0    -> true
            while (!result.empty() && c < result.back() && frequency[result.back()] > 0) {
                stacky[result.back()] = false;
                result.pop_back();
            }
            result.push_back(c);
            stacky[c] = true;
        }
        return result;
    }
};