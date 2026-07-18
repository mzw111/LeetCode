class Solution {
public:
    int findGCD(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int x = nums[0];
        int y = nums[n-1];
        int z = gcd(x,y);
        return z;
    }

};