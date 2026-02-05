class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        int n=nums.size();
        vector<int> result(n);
        for (int i = 0; i < n; i++) {
            if (nums[i] > 0) {
                int x;
                x = nums[i];
                result[i] = nums[(i + x) % n];
            } else if (nums[i] < 0) {
                int y = abs(nums[i]);
                result[i] = nums[(i - y % n + n) % n];
            } else {
                result[i] = nums[i];
            }
        }
        return result;
    }
};