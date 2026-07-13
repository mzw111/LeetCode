class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        string digits = "123456789";
        vector<int> result;
        int n = digits.size();
        for (int length = 1; length <= n; length++) {
            for (int i = 0; i + length <= n; i++) {
                string x = digits.substr(i, length);
                int y = stoi(x);

                if (y >= low && y <= high) {
                    result.push_back(y);
                }
            }
        }
        return result;
    }
};