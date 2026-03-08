class Solution {
public:
    int smallestBalancedIndex(vector<int>& nums) {
        int s = nums.size();
        if (s == 0)
            return -1;
        vector<long long> left(s), right(s);

        long long sum = 0;
        for (int i = 0; i < s; i++) {
            left[i] = sum;
            sum = sum + nums[i];
        }

        long long prod = 1;
        for (int i = s - 1; i >= 0; i--) {
            right[i] = prod;

            if (nums[i] != 0 && prod > LLONG_MAX / nums[i]) {
                prod = LLONG_MAX;
            } else {
                prod = prod * nums[i];
            }
        }

        for (int i = 0; i < s; i++) {
            if (right[i] == left[i]) {
                return i;
            }
        }
        return -1;
    }
};