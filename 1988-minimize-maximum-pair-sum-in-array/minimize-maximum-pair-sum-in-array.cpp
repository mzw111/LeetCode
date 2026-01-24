class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int sum=0;
        int newsum=0;
        int n=nums.size();
        for(int i=0;i<n/2;i++){
            newsum=nums[i]+nums[n-1-i];
            sum=max(sum,newsum);
        }
    return sum;
        
    }
    
};