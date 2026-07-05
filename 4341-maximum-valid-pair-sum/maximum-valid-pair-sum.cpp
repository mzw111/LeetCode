class Solution {
public:
    int maxValidPairSum(vector<int>& nums, int k) {
        vector<int>x;
        int n=nums.size();
        int maxval= INT_MIN;
        int j= INT_MIN;
        for(int i=k;i<n;i++){
            j=max(j, nums[i-k]);
            maxval = max(maxval, j+nums[i]);
        }
        return maxval;
    }
};