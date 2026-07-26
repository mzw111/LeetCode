class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int  i = nums.size()-1;
        int x=  nums[i] * nums[i-1] * nums[i-2];
        int  y = nums[0] * nums[1] * nums[i];
        return max(x,y);  
    }
};
