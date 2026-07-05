class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        
        int n = nums.size();
        int mid = n / 2;
        int midval = nums[mid];
        int count=0;
        for(int x:nums){
            if(x== midval)
                count++;
        }

        return count==1;
    }
};