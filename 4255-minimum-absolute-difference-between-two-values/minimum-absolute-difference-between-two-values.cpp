class Solution {
public:
    int minAbsoluteDifference(vector<int>& nums) {
        int n = nums.size();
        int ans = INT_MAX;
        for (int i = 0; i < n; i++) {
            if (nums[i] == 1) {
                for (int j = 0; j < n; j++) {
                    if (nums[j] == 2) {
                        ans = min(ans, abs(i - j));
                    }
                }
            }
        
        }

        if (ans == INT_MAX) {
            return -1;
        }
        return ans;
    }
    };