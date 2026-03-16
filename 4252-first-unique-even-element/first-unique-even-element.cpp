class Solution {
public:
    int firstUniqueEven(vector<int>& nums) {
        unordered_map<int,int> x;
        int n=nums.size();
        for(int i=0;i<n;i++){
            x[nums[i]]++;
        }
        for(int i=0;i<n;i++){
            if(nums[i]%2==0 && x[nums[i]]==1){
                return nums[i];
            }
        }
        return -1;
    }
};