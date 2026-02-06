class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> x;
        for (int i = 0; i < n; i++) {
            x[nums[i]]++; // makes the mapping part
        }

        int count = 0;
        for (auto&i : x) {
            count = max(count, i.second); // count max
        }
        int ans = 0;
        for (auto&i : x) { // total
            if (i.second == count) {
                ans = ans + i.second;
            }
        }
        return ans;
    }
};