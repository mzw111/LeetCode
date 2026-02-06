class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        int n = nums.size();
        if (n <= 1) {
            return 0;
        }
        int count = 0;
        sort(nums.begin(), nums.end());
        for (int i = 0, j = 0; i < n; i++) {
            while (j + 1 <n && (long long)nums[i] * k >=nums[j+1]){
                j++;
            }
            count = max(count, j - i + 1);
        }
        return n-count;
    }
};