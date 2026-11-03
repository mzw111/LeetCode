class Solution {
public:
    int minMoves(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int x = nums[n-1];
        int total =0;
        for(int i=0;i<nums.size();i++){
            if(nums[i] < x){
                total+= (x- nums[i]);
            }
        }
        return total;
    }
};